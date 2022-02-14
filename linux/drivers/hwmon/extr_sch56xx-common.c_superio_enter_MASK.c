
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int,char*) ;

__attribute__((used)) static inline int FUNC_3(int VAR_2)
{

 if (!FUNC_2(VAR_2, 2, "sch56xx")) {
  FUNC_1("I/O address 0x%04x already in use\n", VAR_2);
  return -VAR_0;
 }

 FUNC_0(VAR_1, VAR_2);

 return 0;
}
