
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {int filename_sym; } ;
typedef TYPE_1__ mrb_irep_debug_info_file ;
struct TYPE_6__ {int flen; TYPE_1__** files; } ;
typedef TYPE_2__ mrb_irep_debug_info ;
struct TYPE_7__ {int rlen; struct TYPE_7__** reps; TYPE_2__* debug_info; } ;
typedef TYPE_3__ mrb_irep ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__*) ;

__attribute__((used)) static size_t
FUNC_4(mrb_state *VAR_0, mrb_irep *VAR_1, mrb_sym **VAR_2, uint16_t *VAR_3)
{
  mrb_sym *VAR_4 = *VAR_2;
  size_t VAR_5 = 0;
  mrb_irep_debug_info *VAR_6 = VAR_1->debug_info;
  int VAR_7;

  FUNC_1(VAR_3);
  for (VAR_7 = 0; VAR_7 < VAR_6->flen; ++VAR_7) {
    mrb_irep_debug_info_file *VAR_8;
    mrb_int VAR_9;

    VAR_8 = VAR_6->files[VAR_7];
    if (FUNC_0(VAR_4, *VAR_3, VAR_8->filename_sym) == -1) {

      *VAR_3 += 1;
      *VAR_2 = VAR_4 = (mrb_sym *)FUNC_2(VAR_0, VAR_4, sizeof(mrb_sym) * (*VAR_3));
      VAR_4[*VAR_3 - 1] = VAR_8->filename_sym;


      FUNC_3(VAR_0, VAR_8->filename_sym, &VAR_9);
      VAR_5 += sizeof(uint16_t) + (size_t)VAR_9;
    }
  }
  for (VAR_7=0; VAR_7<VAR_1->rlen; VAR_7++) {
    VAR_5 += FUNC_4(VAR_0, VAR_1->reps[VAR_7], VAR_2, VAR_3);
  }
  return VAR_5;
}
