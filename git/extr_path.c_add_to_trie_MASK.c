
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int len; char const* contents; int * value; struct trie** children; } ;


 void* FUNC_0 (char const*,void*) ;
 int FUNC_1 (struct trie**,struct trie**,int) ;
 int FUNC_2 (struct trie**,int ,int) ;
 struct trie* FUNC_3 (int) ;
 char const* FUNC_4 (char const*,int) ;

__attribute__((used)) static void *FUNC_5(struct trie *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct trie *VAR_3;
 void *VAR_4;
 int VAR_5;

 if (!*VAR_1) {

  VAR_4 = VAR_0->value;
  VAR_0->value = VAR_2;
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->len; VAR_5++) {
  if (VAR_0->contents[VAR_5] == VAR_1[VAR_5])
   continue;





  VAR_3 = FUNC_3(sizeof(*VAR_3));
  FUNC_1(VAR_3->children, VAR_0->children, sizeof(VAR_0->children));

  VAR_3->len = VAR_0->len - VAR_5 - 1;
  if (VAR_3->len) {
   VAR_3->contents = FUNC_4(VAR_0->contents + VAR_5 + 1,
         VAR_3->len);
  }
  VAR_3->value = VAR_0->value;
  VAR_0->value = ((void*)0);
  VAR_0->len = VAR_5;

  FUNC_2(VAR_0->children, 0, sizeof(VAR_0->children));
  VAR_0->children[(unsigned char)VAR_0->contents[VAR_5]] = VAR_3;


  VAR_0->children[(unsigned char)VAR_1[VAR_5]] =
   FUNC_0(VAR_1 + VAR_5 + 1, VAR_2);
  return ((void*)0);
 }


 if (VAR_1[VAR_5]) {
  VAR_3 = VAR_0->children[(unsigned char)VAR_1[VAR_0->len]];
  if (VAR_3) {
   return FUNC_5(VAR_3, VAR_1 + VAR_0->len + 1, VAR_2);
  } else {
   VAR_3 = FUNC_0(VAR_1 + VAR_0->len + 1, VAR_2);
   VAR_0->children[(unsigned char)VAR_1[VAR_0->len]] = VAR_3;
   return ((void*)0);
  }
 }

 VAR_4 = VAR_0->value;
 VAR_0->value = VAR_2;
 return VAR_4;
}
