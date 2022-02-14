
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct xdiff_emit_state {int consume_callback_data; int (* hunk_fn ) (int ,long,long,long,long,char const*,long) ;TYPE_1__ remainder; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,long,long,long,long,char const*,long) ;

__attribute__((used)) static int FUNC_2(void *VAR_0,
     long VAR_1, long VAR_2,
     long VAR_3, long VAR_4,
     const char *VAR_5, long VAR_6)
{
 struct xdiff_emit_state *VAR_7 = VAR_0;

 if (VAR_7->remainder.len)
  FUNC_0("xdiff emitted hunk in the middle of a line");

 VAR_7->hunk_fn(VAR_7->consume_callback_data,
        VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6);
 return 0;
}
