
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcss_segment {int vm_segtype; int dcss_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct dcss_segment*) ;

int
FUNC_2 (char* VAR_2)
{
 int VAR_3;
 struct dcss_segment VAR_4;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_4.dcss_name);
 VAR_3 = FUNC_1 (&VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 return VAR_4.vm_segtype;
}
