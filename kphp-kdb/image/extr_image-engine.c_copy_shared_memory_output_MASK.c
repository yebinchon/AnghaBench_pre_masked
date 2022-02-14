
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {int size; scalar_t__ timeout; scalar_t__* prog; } ;
struct forth_output {long long const prog_id; int l; scalar_t__ working_time; int s; } ;


 struct forth_output* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 scalar_t__* FUNC_2 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct forth_output*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__* FUNC_6 (char*) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8 (const long long VAR_12, int VAR_13, struct forth_request *VAR_14) {
  if (VAR_13 < 0) { return; }
  struct forth_output *VAR_15 = (struct forth_output *) FUNC_4 (((void*)0), VAR_2, VAR_3, VAR_1, VAR_13, 0);
  if (VAR_15 == VAR_0) {
    VAR_7 = VAR_5;
    VAR_15 = ((void*)0);
    FUNC_7 (1, "copy_shared_memory_output, mmap failed\n%m\n");
    VAR_9++;
  }
  if (VAR_15 != ((void*)0)) {
    if (VAR_15->prog_id != VAR_12 || (VAR_15->l < 0 || VAR_15->l > (int) sizeof (VAR_15->s))) {
      VAR_6++;
      VAR_14->size = 0;
      VAR_14->prog = FUNC_6 ("");
      FUNC_0 (VAR_14->prog);
    } else {
      if (VAR_8 < VAR_15->working_time) {
        VAR_8 = VAR_15->working_time;
      }
      VAR_14->size = VAR_15->l;
      VAR_14->prog = FUNC_2 (VAR_14->size + 1);
      FUNC_0 (VAR_14->prog);
      FUNC_3 (VAR_14->prog, VAR_15->s, VAR_14->size);
      VAR_14->prog[VAR_14->size] = 0;
    }
    VAR_14->timeout = VAR_10 + VAR_11;
    FUNC_5 (VAR_15, VAR_2);
    VAR_4 += VAR_14->size + 1;
    FUNC_1 ();
  }
}
