
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device_driver *VAR_6, const char *VAR_7,
       size_t VAR_8)
{
 unsigned long VAR_9;

 if (!VAR_8 || VAR_8 > 11)
  return -VAR_2;

 if (!VAR_5)
  return -VAR_1;


 FUNC_4(VAR_7, "%lx", &VAR_9);
 FUNC_0(VAR_3, VAR_0, VAR_9);
 FUNC_1();


 if (FUNC_2(VAR_5) == 0) {
  FUNC_3("PPC440SP(e) RAID-6 has been activated "
   "successfully\n");
  VAR_4 = 1;
 } else {
  FUNC_3("PPC440SP(e) RAID-6 hasn't been activated!"
   " Error key ?\n");
  VAR_4 = 0;
 }
 return VAR_8;
}
