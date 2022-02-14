
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isdnhdlc_vars {int dstpos; int crc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct isdnhdlc_vars *VAR_2)
{
 int VAR_3;

 if (VAR_2->dstpos < 2)
  VAR_3 = -VAR_1;
 else if (VAR_2->crc != 0xf0b8)
  VAR_3 = -VAR_0;
 else {

  VAR_2->dstpos -= 2;

  VAR_3 = VAR_2->dstpos;
 }
 return VAR_3;
}
