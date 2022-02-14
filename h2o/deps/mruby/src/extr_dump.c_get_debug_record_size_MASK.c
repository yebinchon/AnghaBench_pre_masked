
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int mrb_state ;
struct TYPE_6__ {int line_type; int line_entry_count; } ;
typedef TYPE_2__ mrb_irep_debug_info_file ;
struct TYPE_7__ {int rlen; struct TYPE_7__** reps; TYPE_1__* debug_info; } ;
typedef TYPE_3__ mrb_irep ;
struct TYPE_5__ {size_t flen; TYPE_2__** files; } ;


 int FUNC_0 (int ) ;



__attribute__((used)) static size_t
FUNC_1(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  size_t VAR_2 = 0;
  uint16_t VAR_3;
  int VAR_4;

  VAR_2 += sizeof(uint32_t);
  VAR_2 += sizeof(uint16_t);

  for (VAR_3 = 0; VAR_3 < VAR_1->debug_info->flen; ++VAR_3) {
    mrb_irep_debug_info_file const* VAR_5 = VAR_1->debug_info->files[VAR_3];

    VAR_2 += sizeof(uint32_t);
    VAR_2 += sizeof(uint16_t);


    VAR_2 += sizeof(uint32_t);
    VAR_2 += sizeof(uint8_t);
    switch (VAR_5->line_type) {
      case 129:
        VAR_2 += sizeof(uint16_t) * (size_t)(VAR_5->line_entry_count);
        break;

      case 128:
        VAR_2 += (sizeof(uint32_t) + sizeof(uint16_t)) * (size_t)(VAR_5->line_entry_count);
        break;

      default: FUNC_0(0); break;
    }
  }
  for (VAR_4=0; VAR_4<VAR_1->rlen; VAR_4++) {
    VAR_2 += FUNC_1(VAR_0, VAR_1->reps[VAR_4]);
  }

  return VAR_2;
}
