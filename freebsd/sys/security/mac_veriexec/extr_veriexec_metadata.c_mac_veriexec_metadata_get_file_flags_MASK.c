
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_veriexec_file_info {int flags; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct mac_veriexec_file_info* FUNC_0 (int ,long,unsigned long,int*,int) ;

int
FUNC_1(dev_t VAR_1, long VAR_2, unsigned long VAR_3,
    int *VAR_4, int VAR_5)
{
 struct mac_veriexec_file_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7,
     VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 *VAR_4 = VAR_6->flags;
 return (0);
}
