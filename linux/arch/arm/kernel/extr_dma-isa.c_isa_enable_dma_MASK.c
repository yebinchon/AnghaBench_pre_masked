
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int length; unsigned long dma_address; } ;
struct TYPE_5__ {unsigned int dma_mode; int sgcount; int count; scalar_t__ invalid; TYPE_1__ buf; int addr; TYPE_1__* sg; } ;
typedef TYPE_2__ dma_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned long FUNC_0 (int *,int ,int,int) ;
 int VAR_12 ;
 int ** VAR_13 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_14, dma_t *VAR_15)
{
 if (VAR_15->invalid) {
  unsigned long VAR_16, VAR_17;
  unsigned int VAR_18;
  enum dma_data_direction VAR_19;

  VAR_18 = (VAR_14 & 3) | VAR_15->dma_mode;
  switch (VAR_15->dma_mode & VAR_2) {
  case 129:
   VAR_19 = VAR_1;
   break;

  case 128:
   VAR_19 = VAR_4;
   break;

  case 130:
   VAR_19 = VAR_0;
   break;

  default:
   VAR_19 = VAR_3;
   break;
  }

  if (!VAR_15->sg) {




   VAR_15->sg = &VAR_15->buf;
   VAR_15->sgcount = 1;
   VAR_15->buf.length = VAR_15->count;
   VAR_15->buf.dma_address = FUNC_0(&VAR_12,
    VAR_15->addr, VAR_15->count,
    VAR_19);
  }

  VAR_16 = VAR_15->buf.dma_address;
  VAR_17 = VAR_15->buf.length - 1;

  FUNC_1(VAR_16 >> 16, VAR_13[VAR_14][VAR_11]);
  FUNC_1(VAR_16 >> 24, VAR_13[VAR_14][VAR_10]);

  if (VAR_14 >= 4) {
   VAR_16 >>= 1;
   VAR_17 >>= 1;
  }

  FUNC_1(0, VAR_13[VAR_14][VAR_6]);

  FUNC_1(VAR_16, VAR_13[VAR_14][VAR_5]);
  FUNC_1(VAR_16 >> 8, VAR_13[VAR_14][VAR_5]);

  FUNC_1(VAR_17, VAR_13[VAR_14][VAR_7]);
  FUNC_1(VAR_17 >> 8, VAR_13[VAR_14][VAR_7]);

  FUNC_1(VAR_18, VAR_13[VAR_14][VAR_9]);
  VAR_15->invalid = 0;
 }
 FUNC_1(VAR_14 & 3, VAR_13[VAR_14][VAR_8]);
}
