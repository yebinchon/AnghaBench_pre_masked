
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (device_t VAR_3)
{
 struct resource *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_3, "Unable to allocate memory resource.\n");
  VAR_6 = VAR_0;
  goto bad;
 }

 if (FUNC_4(FUNC_0(VAR_4)))
  FUNC_3(VAR_3, "VPD checksum failed.  BIOS update may be required.\n");

bad:
 if (VAR_4)
  FUNC_2(VAR_3, VAR_2, VAR_5, VAR_4);
 return (VAR_6);
}
