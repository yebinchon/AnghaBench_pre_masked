
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int access_flags; int max_segs; int page_shift; int lkey; } ;
struct ib_fmr {int lkey; int rkey; } ;
struct rvt_fmr {TYPE_1__ mr; struct ib_fmr ibfmr; } ;
struct ib_pd {int dummy; } ;
struct ib_fmr_attr {int max_pages; int page_shift; } ;
struct TYPE_6__ {int map; } ;


 int VAR_0 ;
 struct ib_fmr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rvt_fmr*) ;
 struct rvt_fmr* FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct ib_pd*,int,int ) ;
 int FUNC_6 (struct rvt_fmr*,int ,int) ;

struct ib_fmr *FUNC_7(struct ib_pd *VAR_5, int VAR_6,
        struct ib_fmr_attr *VAR_7)
{
 struct rvt_fmr *VAR_8;
 int VAR_9;
 struct ib_fmr *VAR_10;
 int VAR_11 = -VAR_0;


 VAR_9 = (VAR_7->max_pages + VAR_3 - 1) / VAR_3;
 VAR_8 = FUNC_2(FUNC_6(VAR_8, VAR_4.map, VAR_9), VAR_1);
 if (!VAR_8)
  goto bail;

 VAR_11 = FUNC_5(&VAR_8->mr, VAR_5, VAR_7->max_pages,
    VAR_2);
 if (VAR_11)
  goto bail;





 VAR_11 = FUNC_3(&VAR_8->mr, 0);
 if (VAR_11)
  goto bail_mregion;
 VAR_8->ibfmr.rkey = VAR_8->mr.lkey;
 VAR_8->ibfmr.lkey = VAR_8->mr.lkey;




 VAR_8->mr.access_flags = VAR_6;
 VAR_8->mr.max_segs = VAR_7->max_pages;
 VAR_8->mr.page_shift = VAR_7->page_shift;

 VAR_10 = &VAR_8->ibfmr;
done:
 return VAR_10;

bail_mregion:
 FUNC_4(&VAR_8->mr);
bail:
 FUNC_1(VAR_8);
 VAR_10 = FUNC_0(VAR_11);
 goto done;
}
