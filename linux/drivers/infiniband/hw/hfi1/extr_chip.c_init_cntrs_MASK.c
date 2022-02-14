
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hfi1_pportdata {void* scntrs; void* cntrs; } ;
struct hfi1_devdata {size_t cntrnameslen; char* cntrnames; int num_rcv_contexts; size_t portcntrnameslen; char* portcntrnames; int num_pports; int synth_stats_timer; int update_cntr_work; int update_cntr_wq; int unit; scalar_t__ nportcntrs; void* scntrs; scalar_t__ ndevcntrs; void* cntrs; } ;
struct TYPE_4__ {int flags; char* name; scalar_t__ offset; } ;
struct TYPE_3__ {int flags; char* name; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (struct hfi1_devdata*) ;
 scalar_t__ VAR_17 ;
 void* FUNC_6 (scalar_t__,int,int ) ;
 void* FUNC_7 (size_t,int ) ;
 int FUNC_8 (char*,char const*,int const) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ VAR_18 ;
 TYPE_1__* VAR_19 ;
 int FUNC_10 (char*,int,char*,char*,int) ;
 int const FUNC_11 (char const*) ;
 int FUNC_12 (int *,int ,int ) ;
 int VAR_20 ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct hfi1_devdata *VAR_21)
{
 int VAR_22, VAR_23, VAR_24;
 size_t VAR_25;
 char *VAR_26;
 char VAR_27[VAR_4];
 struct hfi1_pportdata *VAR_28;
 const char *VAR_29 = ",32";
 const int VAR_30 = FUNC_11(VAR_29);
 u32 VAR_31 = FUNC_2(VAR_21);


 FUNC_12(&VAR_21->synth_stats_timer, VAR_20, 0);






 VAR_21->ndevcntrs = 0;
 VAR_25 = 0;

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  if (VAR_15[VAR_22].flags & VAR_1) {
   FUNC_4("\tSkipping %s\n", VAR_15[VAR_22].name);
   continue;
  }

  if (VAR_15[VAR_22].flags & VAR_3) {
   VAR_15[VAR_22].offset = VAR_21->ndevcntrs;
   for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_15[VAR_22].name, FUNC_13(VAR_24));
    VAR_25 += FUNC_11(VAR_27);

    if (VAR_15[VAR_22].flags & VAR_0)
     VAR_25 += VAR_30;
    VAR_25++;
    VAR_21->ndevcntrs++;
   }
  } else if (VAR_15[VAR_22].flags & VAR_2) {
   VAR_15[VAR_22].offset = VAR_21->ndevcntrs;
   for (VAR_24 = 0; VAR_24 < VAR_31; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_15[VAR_22].name, VAR_24);
    VAR_25 += FUNC_11(VAR_27);

    if (VAR_15[VAR_22].flags & VAR_0)
     VAR_25 += VAR_30;
    VAR_25++;
    VAR_21->ndevcntrs++;
   }
  } else {

   VAR_25 += FUNC_11(VAR_15[VAR_22].name) + 1;

   if (VAR_15[VAR_22].flags & VAR_0)
    VAR_25 += VAR_30;
   VAR_15[VAR_22].offset = VAR_21->ndevcntrs;
   VAR_21->ndevcntrs++;
  }
 }


 VAR_21->cntrs = FUNC_6(VAR_21->ndevcntrs + VAR_18, sizeof(u64),
       VAR_10);
 if (!VAR_21->cntrs)
  goto bail;

 VAR_21->scntrs = FUNC_6(VAR_21->ndevcntrs, sizeof(u64), VAR_10);
 if (!VAR_21->scntrs)
  goto bail;


 VAR_21->cntrnameslen = VAR_25;
 VAR_21->cntrnames = FUNC_7(VAR_25, VAR_10);
 if (!VAR_21->cntrnames)
  goto bail;


 for (VAR_26 = VAR_21->cntrnames, VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  if (VAR_15[VAR_22].flags & VAR_1) {

  } else if (VAR_15[VAR_22].flags & VAR_3) {
   for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_15[VAR_22].name,
      FUNC_13(VAR_24));
    FUNC_8(VAR_26, VAR_27, FUNC_11(VAR_27));
    VAR_26 += FUNC_11(VAR_27);


    if (VAR_15[VAR_22].flags & VAR_0) {
     FUNC_8(VAR_26, VAR_29, VAR_30);
     VAR_26 += VAR_30;
    }

    *VAR_26++ = '\n';
   }
  } else if (VAR_15[VAR_22].flags & VAR_2) {
   for (VAR_24 = 0; VAR_24 < VAR_31; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_15[VAR_22].name, VAR_24);
    FUNC_8(VAR_26, VAR_27, FUNC_11(VAR_27));
    VAR_26 += FUNC_11(VAR_27);


    if (VAR_15[VAR_22].flags & VAR_0) {
     FUNC_8(VAR_26, VAR_29, VAR_30);
     VAR_26 += VAR_30;
    }

    *VAR_26++ = '\n';
   }
  } else {
   FUNC_8(VAR_26, VAR_15[VAR_22].name, FUNC_11(VAR_15[VAR_22].name));
   VAR_26 += FUNC_11(VAR_15[VAR_22].name);


   if (VAR_15[VAR_22].flags & VAR_0) {
    FUNC_8(VAR_26, VAR_29, VAR_30);
    VAR_26 += VAR_30;
   }

   *VAR_26++ = '\n';
  }
 }
 VAR_23 = VAR_21->num_rcv_contexts;
 for (VAR_22 = VAR_5 + VAR_23;
      VAR_22 <= VAR_6; VAR_22++) {
  VAR_19[VAR_22].flags |= VAR_1;
 }


 VAR_25 = 0;
 VAR_21->nportcntrs = 0;
 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  if (VAR_19[VAR_22].flags & VAR_1) {
   FUNC_4("\tSkipping %s\n", VAR_19[VAR_22].name);
   continue;
  }

  if (VAR_19[VAR_22].flags & VAR_3) {
   VAR_19[VAR_22].offset = VAR_21->nportcntrs;
   for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_19[VAR_22].name, FUNC_13(VAR_24));
    VAR_25 += FUNC_11(VAR_27);

    if (VAR_19[VAR_22].flags & VAR_0)
     VAR_25 += VAR_30;
    VAR_25++;
    VAR_21->nportcntrs++;
   }
  } else {

   VAR_25 += FUNC_11(VAR_19[VAR_22].name) + 1;

   if (VAR_19[VAR_22].flags & VAR_0)
    VAR_25 += VAR_30;
   VAR_19[VAR_22].offset = VAR_21->nportcntrs;
   VAR_21->nportcntrs++;
  }
 }


 VAR_21->portcntrnameslen = VAR_25;
 VAR_21->portcntrnames = FUNC_7(VAR_25, VAR_10);
 if (!VAR_21->portcntrnames)
  goto bail;


 for (VAR_26 = VAR_21->portcntrnames, VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  if (VAR_19[VAR_22].flags & VAR_1)
   continue;

  if (VAR_19[VAR_22].flags & VAR_3) {
   for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
    FUNC_10(VAR_27, VAR_4, "%s%d",
      VAR_19[VAR_22].name, FUNC_13(VAR_24));
    FUNC_8(VAR_26, VAR_27, FUNC_11(VAR_27));
    VAR_26 += FUNC_11(VAR_27);


    if (VAR_19[VAR_22].flags & VAR_0) {
     FUNC_8(VAR_26, VAR_29, VAR_30);
     VAR_26 += VAR_30;
    }

    *VAR_26++ = '\n';
   }
  } else {
   FUNC_8(VAR_26, VAR_19[VAR_22].name,
          FUNC_11(VAR_19[VAR_22].name));
   VAR_26 += FUNC_11(VAR_19[VAR_22].name);


   if (VAR_19[VAR_22].flags & VAR_0) {
    FUNC_8(VAR_26, VAR_29, VAR_30);
    VAR_26 += VAR_30;
   }

   *VAR_26++ = '\n';
  }
 }


 VAR_28 = (struct hfi1_pportdata *)(VAR_21 + 1);
 for (VAR_22 = 0; VAR_22 < VAR_21->num_pports; VAR_22++, VAR_28++) {
  VAR_28->cntrs = FUNC_6(VAR_21->nportcntrs, sizeof(u64), VAR_10);
  if (!VAR_28->cntrs)
   goto bail;

  VAR_28->scntrs = FUNC_6(VAR_21->nportcntrs, sizeof(u64), VAR_10);
  if (!VAR_28->scntrs)
   goto bail;
 }


 if (FUNC_5(VAR_21))
  goto bail;

 VAR_21->update_cntr_wq = FUNC_1("hfi1_update_cntr_%d",
           VAR_14, VAR_21->unit);
 if (!VAR_21->update_cntr_wq)
  goto bail;

 FUNC_0(&VAR_21->update_cntr_work, VAR_16);

 FUNC_9(&VAR_21->synth_stats_timer, VAR_17 + VAR_11 * VAR_13);
 return 0;
bail:
 FUNC_3(VAR_21);
 return -VAR_9;
}
