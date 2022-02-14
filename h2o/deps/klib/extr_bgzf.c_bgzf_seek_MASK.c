
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {char open_mode; int block_address; int block_offset; scalar_t__ block_length; int errcode; int fp; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int) ;

int64_t FUNC_1(BGZF* VAR_3, int64_t VAR_4, int VAR_5)
{
 int VAR_6;
 int64_t VAR_7;

 if (VAR_3->open_mode != 'r' || VAR_5 != VAR_2) {
  VAR_3->errcode |= VAR_1;
  return -1;
 }
 VAR_6 = VAR_4 & 0xFFFF;
 VAR_7 = VAR_4 >> 16;
 if (FUNC_0(VAR_3->fp, VAR_7, VAR_2) < 0) {
  VAR_3->errcode |= VAR_0;
  return -1;
 }
 VAR_3->block_length = 0;
 VAR_3->block_address = VAR_7;
 VAR_3->block_offset = VAR_6;
 return 0;
}
