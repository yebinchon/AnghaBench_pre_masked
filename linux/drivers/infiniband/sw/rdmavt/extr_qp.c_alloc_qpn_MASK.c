
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rvt_qpn_table {unsigned int flags; int last; int incr; int nmaps; struct rvt_qpn_map* map; int lock; } ;
struct rvt_qpn_map {int page; } ;
struct TYPE_4__ {int qos_shift; } ;
struct TYPE_3__ {int (* alloc_qpn ) (struct rvt_dev_info*,struct rvt_qpn_table*,int,int) ;} ;
struct rvt_dev_info {TYPE_2__ dparms; TYPE_1__ driver_f; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rvt_qpn_table*,struct rvt_qpn_map*) ;
 int FUNC_3 (struct rvt_qpn_table*,struct rvt_qpn_map*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rvt_dev_info*,struct rvt_qpn_table*,int,int) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct rvt_dev_info *VAR_8, struct rvt_qpn_table *VAR_9,
       enum ib_qp_type VAR_10, u8 VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 struct rvt_qpn_map *VAR_16;
 u32 VAR_17;

 if (VAR_8->driver_f.alloc_qpn)
  return VAR_8->driver_f.alloc_qpn(VAR_8, VAR_9, VAR_10, VAR_11);

 if (VAR_10 == VAR_3 || VAR_10 == VAR_2) {
  unsigned VAR_18;

  VAR_17 = VAR_10 == VAR_2;
  VAR_18 = 1 << (VAR_17 + 2 * (VAR_11 - 1));
  FUNC_4(&VAR_9->lock);
  if (VAR_9->flags & VAR_18)
   VAR_17 = -VAR_0;
  else
   VAR_9->flags |= VAR_18;
  FUNC_5(&VAR_9->lock);
  goto bail;
 }

 VAR_15 = VAR_9->last + VAR_9->incr;
 if (VAR_15 >= VAR_7)
  VAR_15 = VAR_9->incr | ((VAR_9->last & 1) ^ 1);

 VAR_13 = VAR_15 & VAR_5;
 VAR_16 = &VAR_9->map[VAR_15 / VAR_4];
 VAR_14 = VAR_9->nmaps - !VAR_13;
 for (VAR_12 = 0;;) {
  if (FUNC_8(!VAR_16->page)) {
   FUNC_2(VAR_9, VAR_16);
   if (FUNC_8(!VAR_16->page))
    break;
  }
  do {
   if (!FUNC_7(VAR_13, VAR_16->page)) {
    VAR_9->last = VAR_15;
    VAR_17 = VAR_15;
    goto bail;
   }
   VAR_13 += VAR_9->incr;




   VAR_15 = FUNC_3(VAR_9, VAR_16, VAR_13);
  } while (VAR_13 < VAR_4 && VAR_15 < VAR_7);





  if (++VAR_12 > VAR_14) {
   if (VAR_9->nmaps == VAR_6)
    break;
   VAR_16 = &VAR_9->map[VAR_9->nmaps++];

   VAR_13 = VAR_9->incr | (VAR_13 & 1);
  } else if (VAR_16 < &VAR_9->map[VAR_9->nmaps]) {
   ++VAR_16;

   VAR_13 = VAR_9->incr | (VAR_13 & 1);
  } else {
   VAR_16 = &VAR_9->map[0];

   VAR_13 = VAR_9->incr | ((VAR_13 & 1) ^ 1);
  }

  FUNC_1(VAR_8->dparms.qos_shift > 1 &&
   VAR_13 & ((FUNC_0(VAR_8->dparms.qos_shift - 1) - 1) << 1));
  VAR_15 = FUNC_3(VAR_9, VAR_16, VAR_13);
 }

 VAR_17 = -VAR_1;

bail:
 return VAR_17;
}
