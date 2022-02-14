
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {unsigned char* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct wacom_wac*,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct wacom_wac *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->data;

 bool VAR_3 = VAR_2[45] & 0x80;
 int VAR_4 = VAR_2[45] & 0x7F;

 FUNC_0(VAR_1, VAR_0,
        VAR_4, VAR_3, 1, VAR_3);
}
