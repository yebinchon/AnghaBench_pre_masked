
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* shared; } ;
struct TYPE_2__ {int pen; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ,int ,unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wacom_wac *VAR_3,
  unsigned char *VAR_4)
{
 unsigned char VAR_5;
 VAR_5 = VAR_4[0];
 VAR_4[0] = VAR_2;






 FUNC_0(VAR_3->shared->pen, VAR_0, VAR_4,
    VAR_1, 1);

 VAR_4[0] = VAR_5;
}
