
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int buflen; scalar_t__ payloadlen; int payload_offset; scalar_t__ reading; int buf; } ;
typedef TYPE_1__ WSFrame ;
struct TYPE_14__ {TYPE_1__* frame; } ;
typedef TYPE_2__ WSClient ;
struct TYPE_15__ {scalar_t__ max_frm_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static int
FUNC_8 (WSClient * VAR_6)
{
  WSFrame **VAR_7 = ((void*)0);
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

  if (VAR_6->frame == ((void*)0))
    VAR_6->frame = FUNC_0 ();

  VAR_7 = &VAR_6->frame;


  VAR_9 = (*VAR_7)->buflen;
  VAR_10 = 2 - VAR_9;
  if (VAR_10 > 0) {
    if ((VAR_8 = FUNC_2 (VAR_6, (*VAR_7), VAR_9, VAR_10)) < 1)
      return VAR_8;
    if (VAR_8 != VAR_10)
      return FUNC_7 (VAR_6, VAR_4, VAR_8);
  }
  VAR_11 += 2;

  if (FUNC_4 (VAR_6) != 0)
    return VAR_8;

  FUNC_3 ((*VAR_7)->buf, &VAR_12);

  VAR_9 = (*VAR_7)->buflen;
  VAR_10 = (VAR_12 + VAR_11) - VAR_9;
  if (VAR_10 > 0) {
    if ((VAR_8 = FUNC_2 (VAR_6, (*VAR_7), VAR_9, VAR_10)) < 1)
      return VAR_8;
    if (VAR_8 != VAR_10)
      return FUNC_7 (VAR_6, VAR_4, VAR_8);
  }
  VAR_11 += VAR_12;


  VAR_9 = (*VAR_7)->buflen;
  VAR_10 = (4 + VAR_11) - VAR_9;
  if (VAR_10 > 0) {
    if ((VAR_8 = FUNC_2 (VAR_6, (*VAR_7), VAR_9, VAR_10)) < 1)
      return VAR_8;
    if (VAR_8 != VAR_10)
      return FUNC_7 (VAR_6, VAR_4, VAR_8);
  }
  VAR_11 += 4;

  FUNC_6 ((*VAR_7), (*VAR_7)->buf);
  FUNC_5 ((*VAR_7), (*VAR_7)->buf);

  if ((*VAR_7)->payloadlen > VAR_5.max_frm_size) {
    FUNC_1 (VAR_6, VAR_1, "Frame is too big");
    return FUNC_7 (VAR_6, VAR_2 | VAR_0, VAR_8);
  }

  (*VAR_7)->buflen = 0;
  (*VAR_7)->reading = 0;
  (*VAR_7)->payload_offset = VAR_11;

  return FUNC_7 (VAR_6, VAR_3, VAR_8);
}
