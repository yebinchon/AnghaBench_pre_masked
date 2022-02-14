
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
typedef int mrb_state ;
struct TYPE_9__ {int ilen; int* iseq; TYPE_5__* lv; int nlocals; int * syms; struct TYPE_9__** reps; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
struct TYPE_10__ {int name; } ;
 void* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (TYPE_5__*,size_t,int,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int,int,TYPE_1__*) ;
 size_t FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(mrb_state *VAR_4, mrb_irep *VAR_5, int VAR_6, mrb_irep *VAR_7)
{
  int VAR_8;
  uint32_t VAR_9;
  uint16_t VAR_10;
  uint8_t VAR_11;
  mrb_code VAR_12;
  int VAR_13 = FUNC_2(VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_5->ilen; ) {
    VAR_12 = VAR_5->iseq[VAR_8];
    switch(VAR_12){
    case 136:
      VAR_10 = FUNC_1(*(VAR_5->iseq+VAR_8+1));
      FUNC_6(VAR_4, VAR_5->reps[VAR_10], VAR_6 + 1, VAR_7);
      break;

    case 131:
    case 137:
      VAR_9 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_10 = FUNC_0(*(VAR_5->iseq+VAR_8+2));
      FUNC_6(VAR_4, VAR_5->reps[VAR_10], VAR_6 + 1, VAR_7);
      break;

    case 129:
      VAR_10 = FUNC_0(*(VAR_5->iseq+VAR_8+2));
      VAR_11 = FUNC_0(*(VAR_5->iseq+VAR_8+3));
      if (VAR_11 != 0) {
        break;
      }
      else {
        uint16_t VAR_14 = FUNC_5(VAR_4, VAR_5->syms[VAR_10], VAR_6);
        if (VAR_14 != 0) {

          VAR_5->iseq[VAR_8] = 132;
          VAR_5->iseq[VAR_8+2] = VAR_14 >> 8;
          VAR_5->iseq[VAR_8+3] = VAR_14 & 0xff;
        }
      }
      break;

    case 130:
      VAR_9 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_10 = FUNC_0(*(VAR_5->iseq+VAR_8+2));

      if (FUNC_3(VAR_5->lv, VAR_10, VAR_13, VAR_5->nlocals)) {
        uint16_t VAR_15 = FUNC_5(VAR_4, VAR_5->lv[VAR_10 - 1].name, VAR_6);
        if (VAR_15 != 0) {

          VAR_5->iseq[VAR_8] = VAR_12 = 132;
          VAR_5->iseq[VAR_8+2] = VAR_15 >> 8;
          VAR_5->iseq[VAR_8+3] = VAR_15 & 0xff;
        }
      }

      if (FUNC_3(VAR_5->lv, VAR_9, VAR_13, VAR_5->nlocals)) {
        uint16_t VAR_16 = FUNC_5(VAR_4, VAR_5->lv[VAR_9 - 1].name, VAR_6);
        if (VAR_16 != 0) {

          VAR_5->iseq[VAR_8] = VAR_12 = 128;
          VAR_5->iseq[VAR_8+1] = (mrb_code)VAR_10;
          VAR_5->iseq[VAR_8+2] = VAR_16 >> 8;
          VAR_5->iseq[VAR_8+3] = VAR_16 & 0xff;
        }
      }
      break;

    case 132:
      VAR_9 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_10 = FUNC_0(*(VAR_5->iseq+VAR_8+2));
      VAR_11 = FUNC_0(*(VAR_5->iseq+VAR_8+3));
      {
        int VAR_17 = VAR_11+1;
        mrb_irep *VAR_18 = FUNC_4(VAR_7, VAR_6, VAR_17, VAR_5);
        if (FUNC_3(VAR_18->lv, VAR_10, FUNC_2(VAR_18), VAR_18->nlocals)) {
          uint16_t VAR_19 = FUNC_5(VAR_4, VAR_18->lv[VAR_10-1].name, VAR_6);
          if (VAR_19 != 0) {

            VAR_5->iseq[VAR_8] = 132;
            VAR_5->iseq[VAR_8+2] = VAR_19 >> 8;
            VAR_5->iseq[VAR_8+3] = VAR_19 & 0xff;
          }
        }
      }
      break;

    case 128:
      VAR_9 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_10 = FUNC_0(*(VAR_5->iseq+VAR_8+2));
      VAR_11 = FUNC_0(*(VAR_5->iseq+VAR_8+3));
      {
        int VAR_20 = VAR_11+1;
        mrb_irep *VAR_21 = FUNC_4(VAR_7, VAR_6, VAR_20, VAR_5);
        if (FUNC_3(VAR_21->lv, VAR_10, FUNC_2(VAR_21), VAR_21->nlocals)) {
          uint16_t VAR_22 = FUNC_5(VAR_4, VAR_21->lv[VAR_10-1].name, VAR_6);
          if (VAR_22 != 0) {

            VAR_5->iseq[VAR_8] = 128;
            VAR_5->iseq[VAR_8+1] = VAR_9;
            VAR_5->iseq[VAR_8+2] = VAR_22 >> 8;
            VAR_5->iseq[VAR_8+3] = VAR_22 & 0xff;
          }
        }
      }
      break;

    case 135:
      VAR_12 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_8 += VAR_1[VAR_12]+1;
      continue;
    case 134:
      VAR_12 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_8 += VAR_2[VAR_12]+1;
      continue;
    case 133:
      VAR_12 = FUNC_0(*(VAR_5->iseq+VAR_8+1));
      VAR_8 += VAR_3[VAR_12]+1;
      continue;
    }
    VAR_8+=VAR_0[VAR_12];
  }
}
