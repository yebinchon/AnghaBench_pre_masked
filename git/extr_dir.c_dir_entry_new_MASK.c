
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_entry {int len; } ;


 int FUNC_0 (struct dir_entry*,int ,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static struct dir_entry *FUNC_1(const char *VAR_1, int VAR_2)
{
 struct dir_entry *VAR_3;

 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
 VAR_3->len = VAR_2;
 return VAR_3;
}
