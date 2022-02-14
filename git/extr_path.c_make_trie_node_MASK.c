
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {void* value; scalar_t__ len; int contents; } ;


 int FUNC_0 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 struct trie* FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct trie *FUNC_4(const char *VAR_0, void *VAR_1)
{
 struct trie *VAR_2 = FUNC_2(1, sizeof(*VAR_2));
 VAR_2->len = FUNC_1(VAR_0);
 if (VAR_2->len) {
  VAR_2->contents = FUNC_3(VAR_2->len);
  FUNC_0(VAR_2->contents, VAR_0, VAR_2->len);
 }
 VAR_2->value = VAR_1;
 return VAR_2;
}
