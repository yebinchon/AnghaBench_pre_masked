
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc_ct_channel {int enabled; struct intel_guc_ct_buffer* ctbs; } ;
struct intel_guc_ct_buffer {struct guc_ct_buffer_desc* desc; } ;
struct intel_guc_ct {int lock; int pending_requests; } ;
struct guc_ct_buffer_desc {int dummy; } ;
struct ct_request {int fence; int status; int response_len; int* response_buf; int link; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_guc_ct*) ;
 int FUNC_5 (struct intel_guc_ct_buffer*,int const*,int,int,int) ;
 int FUNC_6 (struct intel_guc_ct_channel*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct ct_request*,int*) ;
 int FUNC_14 (struct guc_ct_buffer_desc*,int,int*) ;

__attribute__((used)) static int FUNC_15(struct intel_guc_ct *VAR_3,
       struct intel_guc_ct_channel *VAR_4,
       const u32 *VAR_5,
       u32 VAR_6,
       u32 *VAR_7,
       u32 VAR_8,
       u32 *VAR_9)
{
 struct intel_guc_ct_buffer *VAR_10 = &VAR_4->ctbs[VAR_0];
 struct guc_ct_buffer_desc *VAR_11 = VAR_10->desc;
 struct ct_request VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15;

 FUNC_0(!VAR_4->enabled);
 FUNC_0(!VAR_6);
 FUNC_0(VAR_6 & ~VAR_2);
 FUNC_0(!VAR_7 && VAR_8);

 VAR_14 = FUNC_6(VAR_4);
 VAR_12.fence = VAR_14;
 VAR_12.status = 0;
 VAR_12.response_len = VAR_8;
 VAR_12.response_buf = VAR_7;

 FUNC_10(&VAR_3->lock, VAR_13);
 FUNC_8(&VAR_12.link, &VAR_3->pending_requests);
 FUNC_11(&VAR_3->lock, VAR_13);

 VAR_15 = FUNC_5(VAR_10, VAR_5, VAR_6, VAR_14, !!VAR_7);
 if (FUNC_12(VAR_15))
  goto unlink;

 FUNC_7(FUNC_4(VAR_3));

 if (VAR_7)
  VAR_15 = FUNC_13(&VAR_12, VAR_9);
 else
  VAR_15 = FUNC_14(VAR_11, VAR_14, VAR_9);
 if (FUNC_12(VAR_15))
  goto unlink;

 if (!FUNC_1(*VAR_9)) {
  VAR_15 = -VAR_1;
  goto unlink;
 }

 if (VAR_7) {

  FUNC_3(FUNC_2(VAR_12.status));

  VAR_15 = VAR_12.response_len;
 } else {

  FUNC_3(VAR_12.response_len);

  VAR_15 = FUNC_2(*VAR_9);
 }

unlink:
 FUNC_10(&VAR_3->lock, VAR_13);
 FUNC_9(&VAR_12.link);
 FUNC_11(&VAR_3->lock, VAR_13);

 return VAR_15;
}
