
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int header ;
typedef int _bgzf_file_t ;
struct TYPE_6__ {int block_length; int block_address; scalar_t__ block_offset; int errcode; scalar_t__ fp; scalar_t__ compressed_block; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(BGZF *VAR_3)
{
 uint8_t VAR_4[VAR_2], *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9;
 int64_t VAR_10;
 VAR_10 = FUNC_1((_bgzf_file_t)VAR_3->fp);
 if (FUNC_5(VAR_3, VAR_10)) return 0;
 VAR_6 = FUNC_0(VAR_3->fp, VAR_4, sizeof(VAR_4));
 if (VAR_6 == 0) {
  VAR_3->block_length = 0;
  return 0;
 }
 if (VAR_6 != sizeof(VAR_4) || !FUNC_3(VAR_4)) {
  VAR_3->errcode |= VAR_0;
  return -1;
 }
 VAR_7 = VAR_6;
 VAR_8 = FUNC_7((uint8_t*)&VAR_4[16]) + 1;
 VAR_5 = (uint8_t*)VAR_3->compressed_block;
 FUNC_6(VAR_5, VAR_4, VAR_2);
 VAR_9 = VAR_8 - VAR_2;
 VAR_6 = FUNC_0(VAR_3->fp, &VAR_5[VAR_2], VAR_9);
 if (VAR_6 != VAR_9) {
  VAR_3->errcode |= VAR_1;
  return -1;
 }
 VAR_7 += VAR_6;
 if ((VAR_6 = FUNC_4(VAR_3, VAR_8)) < 0) return -1;
 if (VAR_3->block_length != 0) VAR_3->block_offset = 0;
 VAR_3->block_address = VAR_10;
 VAR_3->block_length = VAR_6;
 FUNC_2(VAR_3, VAR_7);
 return 0;
}
