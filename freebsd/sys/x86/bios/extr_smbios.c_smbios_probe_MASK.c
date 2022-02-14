
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (device_t VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = 0;
 VAR_6 = 0;
 VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_6, VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_4, "Unable to allocate memory resource.\n");
  VAR_7 = VAR_0;
  goto bad;
 }

 if (FUNC_4(FUNC_0(VAR_5))) {
  FUNC_3(VAR_4, "SMBIOS checksum failed.\n");
  VAR_7 = VAR_1;
  goto bad;
 }

bad:
 if (VAR_5)
  FUNC_2(VAR_4, VAR_3, VAR_6, VAR_5);
 return (VAR_7);
}
