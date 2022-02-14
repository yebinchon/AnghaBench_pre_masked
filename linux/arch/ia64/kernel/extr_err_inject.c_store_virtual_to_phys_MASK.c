
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {unsigned int id; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7=VAR_3->id;
 u64 VAR_8=FUNC_3(VAR_5, ((void*)0), 16);
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, 1, VAR_1, ((void*)0));
 if (VAR_9<=0) {



  return -VAR_0;
 }

 VAR_2[VAR_7] = FUNC_1(VAR_8);
 return VAR_6;
}
