
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int avail_in; int avail_out; int total_out; void* next_out; int * next_in; int * zfree; int * zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int block_offset; int * uncompressed_block; int errcode; int compress_level; int * compressed_block; } ;
typedef TYPE_2__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,int,int ) ;
 int * VAR_9 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(BGZF *VAR_10, int VAR_11)
{
 uint8_t *VAR_12 = VAR_10->compressed_block;
 int VAR_13 = VAR_0;
 int VAR_14 = VAR_11;
 int VAR_15 = 0;
 int VAR_16;
 uint32_t VAR_17;

 FUNC_0(VAR_11 <= VAR_0);
 FUNC_5(VAR_12, VAR_9, VAR_3);
 while (1) {
  int VAR_18;
  z_stream VAR_19;
  VAR_19.zalloc = ((void*)0);
  VAR_19.zfree = ((void*)0);
  VAR_19.next_in = VAR_10->uncompressed_block;
  VAR_19.avail_in = VAR_14;
  VAR_19.next_out = (void*)&VAR_12[VAR_3];
  VAR_19.avail_out = VAR_13 - VAR_3 - VAR_2;
  VAR_18 = FUNC_4(&VAR_19, VAR_10->compress_level, VAR_5, -15, 8, VAR_4);
  if (VAR_18 != VAR_7) {
   VAR_10->errcode |= VAR_1;
   return -1;
  }
  VAR_18 = FUNC_2(&VAR_19, VAR_6);
  if (VAR_18 != VAR_8) {
   FUNC_3(&VAR_19);
   if (VAR_18 == VAR_7) {
    VAR_14 -= 1024;
    FUNC_0(VAR_14 > 0);
    continue;
   }
   VAR_10->errcode |= VAR_1;
   return -1;
  }
  if (FUNC_3(&VAR_19) != VAR_7) {
   VAR_10->errcode |= VAR_1;
   return -1;
  }
  VAR_15 = VAR_19.total_out;
  VAR_15 += VAR_3 + VAR_2;
  FUNC_0(VAR_15 <= VAR_0);
  break;
 }

 FUNC_0(VAR_15 > 0);
 FUNC_6((uint8_t*)&VAR_12[16], VAR_15 - 1);
 VAR_17 = FUNC_1(0L, ((void*)0), 0L);
 VAR_17 = FUNC_1(VAR_17, VAR_10->uncompressed_block, VAR_14);
 FUNC_7((uint8_t*)&VAR_12[VAR_15-8], VAR_17);
 FUNC_7((uint8_t*)&VAR_12[VAR_15-4], VAR_14);

 VAR_16 = VAR_11 - VAR_14;
 if (VAR_16 > 0) {
  FUNC_0(VAR_16 <= VAR_14);
  FUNC_5(VAR_10->uncompressed_block, VAR_10->uncompressed_block + VAR_14, VAR_16);
 }
 VAR_10->block_offset = VAR_16;
 return VAR_15;
}
