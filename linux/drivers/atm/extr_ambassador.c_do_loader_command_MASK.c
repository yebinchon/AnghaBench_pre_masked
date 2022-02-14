
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t loader_command ;
struct TYPE_5__ {void* result; void* valid; void* command; } ;
typedef TYPE_1__ loader_block ;
typedef int amb_dev ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t FUNC_1 (void*) ;
 int* VAR_8 ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (size_t,size_t) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__ volatile*) ;
 int FUNC_5 (int const*) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int const*,int ) ;
 int FUNC_9 (TYPE_1__ volatile*) ;
 int FUNC_10 (int const*,int ,int) ;

__attribute__((used)) static int FUNC_11(volatile loader_block *VAR_11, const amb_dev *VAR_12,
        loader_command VAR_13)
{

  unsigned long VAR_14;

  FUNC_0 (VAR_2|VAR_3, "do_loader_command");
  VAR_11->result = 0;
  VAR_11->command = FUNC_2 (VAR_13);
  VAR_11->valid = FUNC_2 (VAR_4);


  FUNC_10 (VAR_12, FUNC_7(VAR_7, VAR_9), FUNC_9 (VAR_11) & ~VAR_10);

  VAR_14 = VAR_8[VAR_13] * 10;

  while (!VAR_11->result || VAR_11->result == FUNC_2 (VAR_0))
    if (VAR_14) {
      VAR_14 = FUNC_6(VAR_14);
    } else {
      FUNC_0 (VAR_3|VAR_1, "command %d timed out", VAR_13);
      FUNC_5 (VAR_12);
      FUNC_4 (VAR_11);
      return -VAR_5;
    }

  if (VAR_13 == VAR_6) {

    VAR_14 = 100;
    while (FUNC_8 (VAR_12, FUNC_7(VAR_7, VAR_9)))
      if (VAR_14) {
 VAR_14 = FUNC_6(VAR_14);
      } else {
 FUNC_0 (VAR_3|VAR_1, "start command did not clear doorbell, res=%08x",
  FUNC_1 (VAR_11->result));
 FUNC_5 (VAR_12);
 return -VAR_5;
      }
    return 0;
  } else {
    return FUNC_3 (VAR_13, FUNC_1 (VAR_11->result));
  }

}
