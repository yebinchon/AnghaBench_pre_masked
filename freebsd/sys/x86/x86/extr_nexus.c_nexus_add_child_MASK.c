
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct nexus_device {int nx_resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int) ;
 int FUNC_1 (int ,struct nexus_device*) ;
 struct nexus_device* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct nexus_device *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct nexus_device), VAR_0, VAR_1|VAR_2);
 if (!VAR_8)
  return(0);
 FUNC_3(&VAR_8->nx_resources);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);


 FUNC_1(VAR_7, VAR_8);

 return(VAR_7);
}
