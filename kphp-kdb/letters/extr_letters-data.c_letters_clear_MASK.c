
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int priority; struct TYPE_5__* next; int id; } ;
typedef TYPE_1__ temp_letter ;
struct TYPE_6__ {int drive_l; int drive_r; int memory_l; int memory_r; int drive_old_mx; int memory_buf_r; scalar_t__ memory_buf_l; } ;
typedef TYPE_2__ one_header ;
struct TYPE_7__ {TYPE_2__* data; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 long long FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__* VAR_6 ;
 int FUNC_4 (int,int ) ;

long long FUNC_5 (int VAR_7) {
  if (VAR_7 == 0) {
    long long VAR_8 = FUNC_2 (VAR_7);
    FUNC_4 (1, 0);
    return VAR_8;
  }

  long long VAR_9 = FUNC_2 (VAR_7);
  one_header *VAR_10 = &VAR_5.data[VAR_7];

  temp_letter *VAR_11 = &VAR_4;
  while (VAR_11->next != &VAR_4) {
    if (VAR_11->next->priority == VAR_7) {
      FUNC_1 (VAR_11->next->id);
      VAR_2++;
    } else {
      VAR_11 = VAR_11->next;
    }
  }

  VAR_10->drive_l = VAR_10->drive_r;
  VAR_10->memory_l = VAR_10->drive_l;
  VAR_10->memory_r = (VAR_10->drive_r + sizeof (long long)) % VAR_10->drive_old_mx;
  VAR_10->memory_buf_l = 0;
  VAR_10->memory_buf_r = sizeof (long long);
  *((long long *)VAR_6[VAR_7]) = VAR_0;

  FUNC_0 (FUNC_3 (VAR_3[2 + VAR_7], VAR_10->drive_r, VAR_1) == VAR_10->drive_r);
  FUNC_0 (*(long long *)(VAR_6[VAR_7] + VAR_10->memory_buf_l) == VAR_0);

  return VAR_9;
}
