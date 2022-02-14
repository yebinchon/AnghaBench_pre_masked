
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int offset; int data; } ;
struct TYPE_16__ {int (* progress_cb ) (int ,int,int ) ;int message_cb_payload; TYPE_2__ buffer; } ;
typedef TYPE_1__ transport_smart ;
typedef TYPE_2__ gitno_buffer ;
typedef int git_push ;
struct TYPE_18__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ git_pkt_progress ;
struct TYPE_19__ {int error; } ;
typedef TYPE_4__ git_pkt_err ;
typedef int git_pkt_data ;
struct TYPE_20__ {int type; } ;
typedef TYPE_5__ git_pkt ;
struct TYPE_21__ {scalar_t__ size; } ;
typedef TYPE_6__ git_buf ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int *,int *,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__**,char const**,int ,int ) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(transport_smart *VAR_7, git_push *VAR_8)
{
 git_pkt *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 gitno_buffer *VAR_11 = &VAR_7->buffer;
 int VAR_12, VAR_13;
 git_buf VAR_14 = VAR_0;

 for (;;) {
  if (VAR_11->offset > 0)
   VAR_12 = FUNC_5(&VAR_9, &VAR_10,
         VAR_11->data, VAR_11->offset);
  else
   VAR_12 = VAR_1;

  if (VAR_12 < 0 && VAR_12 != VAR_1) {
   VAR_12 = -1;
   goto done;
  }

  if (VAR_12 == VAR_1) {
   if ((VAR_13 = FUNC_7(VAR_11)) < 0) {
    VAR_12 = VAR_13;
    goto done;
   }

   if (VAR_13 == 0) {
    FUNC_3(VAR_4, "early EOF");
    VAR_12 = VAR_2;
    goto done;
   }
   continue;
  }

  FUNC_6(VAR_11, VAR_10);

  VAR_12 = 0;

  switch (VAR_9->type) {
   case 130:

    VAR_12 = FUNC_1(VAR_8, (git_pkt_data *)VAR_9, &VAR_14);
    break;
   case 129:
    FUNC_3(VAR_4, "report-status: Error reported: %s",
     ((git_pkt_err *)VAR_9)->error);
    VAR_12 = -1;
    break;
   case 128:
    if (VAR_7->progress_cb) {
     git_pkt_progress *VAR_15 = (git_pkt_progress *) VAR_9;

     if (VAR_15->len > VAR_6) {
      FUNC_3(VAR_4, "oversized progress message");
      VAR_12 = VAR_3;
      goto done;
     }

     VAR_12 = VAR_7->progress_cb(VAR_15->data, (int)VAR_15->len, VAR_7->message_cb_payload);
    }
    break;
   default:
    VAR_12 = FUNC_0(VAR_8, VAR_9);
    break;
  }

  FUNC_4(VAR_9);


  if (VAR_12 == VAR_5) {
   VAR_12 = 0;
   if (VAR_14.size > 0) {


    FUNC_3(VAR_4, "Incomplete pack data pkt-line");
    VAR_12 = VAR_3;
   }
   goto done;
  }

  if (VAR_12 < 0) {
   goto done;
  }
 }
done:
 FUNC_2(&VAR_14);
 return VAR_12;
}
