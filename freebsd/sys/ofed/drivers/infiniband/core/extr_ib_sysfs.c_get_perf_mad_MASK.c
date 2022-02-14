
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {int base_version; int class_version; scalar_t__ attr_id; int method; int mgmt_class; } ;
struct ib_mad {int* data; TYPE_1__ mad_hdr; } ;
struct ib_device {int (* process_mad ) (struct ib_device*,int ,int,int *,int *,struct ib_mad_hdr const*,size_t,struct ib_mad_hdr*,size_t*,int *) ;} ;
typedef int ssize_t ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ib_mad*) ;
 struct ib_mad* FUNC_1 (int,int ) ;
 struct ib_mad* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int*,size_t) ;
 int FUNC_4 (struct ib_device*,int ,int,int *,int *,struct ib_mad_hdr const*,size_t,struct ib_mad_hdr*,size_t*,int *) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_10, int VAR_11, __be16 VAR_12,
  void *VAR_13, int VAR_14, size_t VAR_15)
{
 struct ib_mad *VAR_16;
 struct ib_mad *VAR_17;
 size_t VAR_18 = sizeof(*VAR_17);
 u16 VAR_19 = 0;
 ssize_t VAR_20;

 if (!VAR_10->process_mad)
  return -VAR_2;

 VAR_16 = FUNC_2(sizeof *VAR_16, VAR_3);
 VAR_17 = FUNC_1(sizeof *VAR_17, VAR_3);
 if (!VAR_16 || !VAR_17) {
  VAR_20 = -VAR_1;
  goto out;
 }

 VAR_16->mad_hdr.base_version = 1;
 VAR_16->mad_hdr.mgmt_class = VAR_7;
 VAR_16->mad_hdr.class_version = 1;
 VAR_16->mad_hdr.method = VAR_8;
 VAR_16->mad_hdr.attr_id = VAR_12;

 if (VAR_12 != VAR_9)
  VAR_16->data[41] = VAR_11;

 if ((VAR_10->process_mad(VAR_10, VAR_4,
   VAR_11, ((void*)0), ((void*)0),
   (const struct ib_mad_hdr *)VAR_16, VAR_18,
   (struct ib_mad_hdr *)VAR_17, &VAR_18,
   &VAR_19) &
      (VAR_6 | VAR_5)) !=
     (VAR_6 | VAR_5)) {
  VAR_20 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_13, VAR_17->data + VAR_14, VAR_15);
 VAR_20 = VAR_15;
out:
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 return VAR_20;
}
