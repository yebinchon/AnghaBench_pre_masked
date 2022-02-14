
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int len; char const* contents; scalar_t__ value; struct trie** children; } ;
typedef int (* match_fn ) (char const*,scalar_t__,void*) ;



__attribute__((used)) static int FUNC_0(struct trie *VAR_0, const char *VAR_1, match_fn VAR_2,
       void *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct trie *VAR_6;

 if (!*VAR_1) {

  if (VAR_0->value && !VAR_0->len)
   return VAR_2(VAR_1, VAR_0->value, VAR_3);
  else
   return -1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->len; VAR_4++) {

  if (VAR_1[VAR_4] == '/' && VAR_1[VAR_4+1] == '/') {
   VAR_1++;
   continue;
  }
  if (VAR_0->contents[VAR_4] != VAR_1[VAR_4])
   return -1;
 }


 VAR_1 += VAR_4;
 if (!*VAR_1) {

  if (VAR_0->value)
   return VAR_2(VAR_1, VAR_0->value, VAR_3);
  else
   return -1;
 }


 while (VAR_1[0] == '/' && VAR_1[1] == '/')
  VAR_1++;

 VAR_6 = VAR_0->children[(unsigned char)*VAR_1];
 if (VAR_6)
  VAR_5 = FUNC_0(VAR_6, VAR_1 + 1, VAR_2, VAR_3);
 else
  VAR_5 = -1;

 if (VAR_5 >= 0 || (*VAR_1 != '/' && *VAR_1 != 0))
  return VAR_5;
 if (VAR_0->value)
  return VAR_2(VAR_1, VAR_0->value, VAR_3);
 else
  return -1;
}
