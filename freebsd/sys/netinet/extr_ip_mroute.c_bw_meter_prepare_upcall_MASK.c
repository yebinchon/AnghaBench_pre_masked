
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_9__ {int b_bytes; int b_packets; struct timeval b_time; } ;
struct TYPE_7__ {int b_bytes; int b_packets; int b_time; } ;
struct bw_upcall {int bu_flags; TYPE_4__ bu_measured; TYPE_2__ bu_threshold; int bu_dst; int bu_src; } ;
struct TYPE_10__ {int b_bytes; int b_packets; } ;
struct TYPE_8__ {int b_bytes; int b_packets; int b_time; } ;
struct bw_meter {int bm_flags; TYPE_5__ bm_measured; TYPE_3__ bm_threshold; TYPE_1__* bm_mfc; int bm_start_time; } ;
struct TYPE_6__ {int mfc_mcastgrp; int mfc_origin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 struct bw_upcall* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct bw_meter *VAR_11, struct timeval *VAR_12)
{
    struct timeval VAR_13;
    struct bw_upcall *VAR_14;

    FUNC_1();




    VAR_13 = *VAR_12;
    FUNC_0(&VAR_13, &VAR_11->bm_start_time);




    if (VAR_10 >= VAR_4)
 FUNC_2();




    VAR_14 = &VAR_9[VAR_10++];
    VAR_14->bu_src = VAR_11->bm_mfc->mfc_origin;
    VAR_14->bu_dst = VAR_11->bm_mfc->mfc_mcastgrp;
    VAR_14->bu_threshold.b_time = VAR_11->bm_threshold.b_time;
    VAR_14->bu_threshold.b_packets = VAR_11->bm_threshold.b_packets;
    VAR_14->bu_threshold.b_bytes = VAR_11->bm_threshold.b_bytes;
    VAR_14->bu_measured.b_time = VAR_13;
    VAR_14->bu_measured.b_packets = VAR_11->bm_measured.b_packets;
    VAR_14->bu_measured.b_bytes = VAR_11->bm_measured.b_bytes;
    VAR_14->bu_flags = 0;
    if (VAR_11->bm_flags & VAR_3)
 VAR_14->bu_flags |= VAR_8;
    if (VAR_11->bm_flags & VAR_2)
 VAR_14->bu_flags |= VAR_7;
    if (VAR_11->bm_flags & VAR_0)
 VAR_14->bu_flags |= VAR_5;
    if (VAR_11->bm_flags & VAR_1)
 VAR_14->bu_flags |= VAR_6;
}
