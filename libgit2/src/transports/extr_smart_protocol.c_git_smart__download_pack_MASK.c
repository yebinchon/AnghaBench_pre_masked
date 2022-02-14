
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ val; } ;
struct TYPE_24__ {int side_band_64k; int side_band; } ;
struct TYPE_27__ {scalar_t__ offset; } ;
struct TYPE_26__ {int (* progress_cb ) (int ,int,int ) ;struct network_packetsize_payload* packetsize_payload; scalar_t__ (* packetsize_cb ) (scalar_t__,struct network_packetsize_payload*) ;int message_cb_payload; TYPE_22__ cancelled; TYPE_1__ caps; TYPE_3__ buffer; } ;
typedef TYPE_2__ transport_smart ;
struct network_packetsize_payload {int (* callback ) (TYPE_7__*,void*) ;scalar_t__ last_fired_bytes; void* payload; TYPE_7__* stats; int member_0; } ;
struct git_odb_writepack {int (* append ) (struct git_odb_writepack*,int ,scalar_t__,TYPE_7__*) ;int (* commit ) (struct git_odb_writepack*,TYPE_7__*) ;int (* free ) (struct git_odb_writepack*) ;} ;
typedef TYPE_3__ gitno_buffer ;
typedef int git_transport ;
typedef int git_repository ;
struct TYPE_28__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ git_pkt_progress ;
struct TYPE_29__ {scalar_t__ len; int data; } ;
typedef TYPE_5__ git_pkt_data ;
struct TYPE_30__ {scalar_t__ type; } ;
typedef TYPE_6__ git_pkt ;
typedef int git_odb ;
typedef int (* git_indexer_progress_cb ) (TYPE_7__*,void*) ;
struct TYPE_31__ {scalar_t__ received_bytes; } ;
typedef TYPE_7__ git_indexer_progress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_22__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct git_odb_writepack**,int *,int (*) (TYPE_7__*,void*),void*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,struct network_packetsize_payload*) ;
 int FUNC_9 (TYPE_2__*,struct git_odb_writepack*,TYPE_3__*,TYPE_7__*) ;
 int FUNC_10 (TYPE_6__**,int *,TYPE_3__*) ;
 scalar_t__ FUNC_11 (scalar_t__,struct network_packetsize_payload*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (struct git_odb_writepack*,int ,scalar_t__,TYPE_7__*) ;
 int FUNC_14 (TYPE_7__*,void*) ;
 int FUNC_15 (struct git_odb_writepack*,TYPE_7__*) ;
 int FUNC_16 (struct git_odb_writepack*) ;

int FUNC_17(
 git_transport *VAR_7,
 git_repository *VAR_8,
 git_indexer_progress *VAR_9,
 git_indexer_progress_cb VAR_10,
 void *VAR_11)
{
 transport_smart *VAR_12 = (transport_smart *)VAR_7;
 gitno_buffer *VAR_13 = &VAR_12->buffer;
 git_odb *VAR_14;
 struct git_odb_writepack *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 struct network_packetsize_payload VAR_17 = {0};

 FUNC_7(VAR_9, 0, sizeof(git_indexer_progress));

 if (VAR_10) {
  VAR_17.callback = VAR_10;
  VAR_17.payload = VAR_11;
  VAR_17.stats = VAR_9;
  VAR_12->packetsize_cb = &FUNC_8;
  VAR_12->packetsize_payload = &VAR_17;


  if (VAR_12->buffer.offset > 0 && !VAR_12->cancelled.val)
   if (VAR_12->packetsize_cb(VAR_12->buffer.offset, VAR_12->packetsize_payload))
    FUNC_1(&VAR_12->cancelled, 1);
 }

 if ((VAR_16 = FUNC_6(&VAR_14, VAR_8)) < 0 ||
  ((VAR_16 = FUNC_4(&VAR_15, VAR_14, VAR_10, VAR_11)) != 0))
  goto done;






 if (!VAR_12->caps.side_band && !VAR_12->caps.side_band_64k) {
  VAR_16 = FUNC_9(VAR_12, VAR_15, VAR_13, VAR_9);
  goto done;
 }

 do {
  git_pkt *VAR_18 = ((void*)0);


  if (VAR_12->cancelled.val) {
   FUNC_2();
   VAR_16 = VAR_2;
   goto done;
  }

  if ((VAR_16 = FUNC_10(&VAR_18, ((void*)0), VAR_13)) >= 0) {

   if (VAR_12->cancelled.val) {
    FUNC_2();
    VAR_16 = VAR_2;
   } else if (VAR_18->type == VAR_5) {
    if (VAR_12->progress_cb) {
     git_pkt_progress *VAR_19 = (git_pkt_progress *) VAR_18;

     if (VAR_19->len > VAR_6) {
      FUNC_3(VAR_1, "oversized progress message");
      VAR_16 = VAR_0;
      goto done;
     }

     VAR_16 = VAR_12->progress_cb(VAR_19->data, (int)VAR_19->len, VAR_12->message_cb_payload);
    }
   } else if (VAR_18->type == VAR_3) {
    git_pkt_data *VAR_20 = (git_pkt_data *) VAR_18;

    if (VAR_20->len)
     VAR_16 = VAR_15->append(VAR_15, VAR_20->data, VAR_20->len, VAR_9);
   } else if (VAR_18->type == VAR_4) {

    FUNC_0(VAR_18);
    break;
   }
  }

  FUNC_5(VAR_18);

  if (VAR_16 < 0)
   goto done;

 } while (1);
 if (VAR_17.callback && VAR_17.stats->received_bytes > VAR_17.last_fired_bytes) {
  VAR_16 = VAR_17.callback(VAR_17.stats, VAR_17.payload);
  if (VAR_16 != 0)
   goto done;
 }

 VAR_16 = VAR_15->commit(VAR_15, VAR_9);

done:
 if (VAR_15)
  VAR_15->free(VAR_15);
 if (VAR_10) {
  VAR_12->packetsize_cb = ((void*)0);
  VAR_12->packetsize_payload = ((void*)0);
 }

 return VAR_16;
}
