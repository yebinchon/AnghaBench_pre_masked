
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct _msgT* lh_first; } ;
struct TYPE_5__ {struct _setT* le_next; } ;
struct _setT {int setId; TYPE_2__ msghead; TYPE_1__ entries; } ;
struct _nls_set_hdr {void* __index; void* __nmsgs; void* __setno; } ;
struct _nls_msg_hdr {void* __offset; void* __msglen; void* __msgno; } ;
struct _nls_cat_hdr {void* __msg_txt_offset; void* __msg_hdr_offset; void* __mem; void* __nsets; void* __magic; } ;
struct TYPE_7__ {struct _msgT* le_next; } ;
struct _msgT {int msgId; int str; TYPE_3__ entries; } ;
struct TYPE_8__ {struct _setT* lh_first; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (void*,char,int) ;
 int FUNC_3 (char*,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,void*,int) ;
 void* FUNC_6 (int) ;

void
FUNC_7(int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 void *VAR_7;
 struct _nls_cat_hdr *VAR_8;
 struct _nls_set_hdr *VAR_9;
 struct _nls_msg_hdr *VAR_10;
 char *VAR_11;
 struct _setT *VAR_12;
 struct _msgT *VAR_13;
 int VAR_14;
 int VAR_15;



 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;

 for (VAR_12 = VAR_1.lh_first; VAR_12 != ((void*)0);
     VAR_12 = VAR_12->entries.le_next) {
  VAR_3++;

  for (VAR_13 = VAR_12->msghead.lh_first; VAR_13 != ((void*)0);
      VAR_13 = VAR_13->entries.le_next) {
   VAR_4++;
   VAR_5 += FUNC_4(VAR_13->str) + 1;
  }
 }
 VAR_6 = sizeof(struct _nls_cat_hdr)
     + (VAR_3 * sizeof(struct _nls_set_hdr))
     + (VAR_4 * sizeof(struct _nls_msg_hdr))
     + VAR_5;

 VAR_7 = FUNC_6(VAR_6);
 FUNC_2(VAR_7, '\0', VAR_6);


 VAR_8 = (struct _nls_cat_hdr *) VAR_7;
 VAR_8->__magic = FUNC_0(VAR_0);
 VAR_8->__nsets = FUNC_0(VAR_3);
 VAR_8->__mem = FUNC_0(VAR_6 - sizeof(struct _nls_cat_hdr));
 VAR_8->__msg_hdr_offset =
     FUNC_0(VAR_3 * sizeof(struct _nls_set_hdr));
 VAR_8->__msg_txt_offset =
     FUNC_0(VAR_3 * sizeof(struct _nls_set_hdr) +
     VAR_4 * sizeof(struct _nls_msg_hdr));


 VAR_9 = (struct _nls_set_hdr *)(void *)((char *)VAR_7 +
     sizeof(struct _nls_cat_hdr));
 VAR_10 = (struct _nls_msg_hdr *)(void *)((char *)VAR_7 +
     sizeof(struct _nls_cat_hdr) +
     VAR_3 * sizeof(struct _nls_set_hdr));
 VAR_11 = (char *) VAR_7 +
     sizeof(struct _nls_cat_hdr) +
     VAR_3 * sizeof(struct _nls_set_hdr) +
     VAR_4 * sizeof(struct _nls_msg_hdr);

 VAR_14 = 0;
 VAR_15 = 0;
 for (VAR_12 = VAR_1.lh_first; VAR_12 != ((void*)0);
     VAR_12 = VAR_12->entries.le_next) {

  VAR_4 = 0;
  for (VAR_13 = VAR_12->msghead.lh_first; VAR_13 != ((void*)0);
      VAR_13 = VAR_13->entries.le_next) {
   int VAR_16 = FUNC_4(VAR_13->str) + 1;

   VAR_10->__msgno = FUNC_0(VAR_13->msgId);
   VAR_10->__msglen = FUNC_0(VAR_16);
   VAR_10->__offset = FUNC_0(VAR_15);

   FUNC_1(VAR_11, VAR_13->str, VAR_16);
   VAR_11 += VAR_16;
   VAR_15 += VAR_16;

   VAR_4++;
   VAR_10++;
  }

  VAR_9->__setno = FUNC_0(VAR_12->setId);
  VAR_9->__nmsgs = FUNC_0(VAR_4);
  VAR_9->__index = FUNC_0(VAR_14);
  VAR_14 += VAR_4;
  VAR_9++;
 }


 FUNC_5(VAR_2, VAR_7, VAR_6);
}
