
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cctl_devlist_data {size_t level; int * cur_sb; } ;
typedef int XML_Char ;


 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
 struct cctl_devlist_data *VAR_3;

 VAR_3 = (struct cctl_devlist_data *)VAR_0;

 FUNC_0(VAR_3->cur_sb[VAR_3->level], VAR_1, VAR_2);
}
