
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u_short ;
struct pf_frent {int fe_len; scalar_t__ fe_off; int fe_m; scalar_t__ fe_mff; } ;
struct pf_fragment_cmp {scalar_t__ frc_af; int frc_id; } ;
struct pf_fragment {int fr_maxlen; int fr_holes; int fr_queue; int fr_timeout; int fr_entries; int fr_firstoff; } ;
struct TYPE_2__ {scalar_t__ fe_off; scalar_t__ fe_len; int fe_mff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,struct pf_fragment*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct pf_frent* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct pf_fragment*,int ) ;
 TYPE_1__* FUNC_9 (int *,int ) ;
 struct pf_frent* FUNC_10 (struct pf_frent*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 struct pf_fragment* FUNC_14 (struct pf_fragment_cmp*,int *) ;
 int FUNC_15 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (struct pf_fragment*,struct pf_frent*,struct pf_frent*) ;
 struct pf_frent* FUNC_17 (struct pf_fragment*,struct pf_frent*) ;
 int FUNC_18 (struct pf_fragment*,struct pf_frent*) ;
 int VAR_13 ;
 struct pf_fragment* FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,struct pf_frent*) ;

__attribute__((used)) static struct pf_fragment *
FUNC_21(struct pf_fragment_cmp *VAR_14, struct pf_frent *VAR_15,
    u_short *VAR_16)
{
 struct pf_frent *VAR_17, *VAR_18, *VAR_19;
 struct pf_fragment *VAR_20;
 uint16_t VAR_21;

 FUNC_2();


 if (VAR_15->fe_len == 0) {
  FUNC_0(("bad fragment: len 0"));
  goto bad_fragment;
 }


 if (VAR_15->fe_mff && (VAR_15->fe_len & 0x7)) {
  FUNC_0(("bad fragment: mff and len %d", VAR_15->fe_len));
  goto bad_fragment;
 }


 if (VAR_15->fe_off + VAR_15->fe_len > VAR_1) {
  FUNC_0(("bad fragment: max packet %d",
      VAR_15->fe_off + VAR_15->fe_len));
  goto bad_fragment;
 }

 FUNC_0((VAR_14->frc_af == VAR_0 ?
     "reass frag %d @ %d-%d" : "reass frag %#08x @ %d-%d",
     VAR_14->frc_id, VAR_15->fe_off, VAR_15->fe_off + VAR_15->fe_len));


 VAR_20 = FUNC_14(VAR_14, &VAR_5);


 if (VAR_20 == ((void*)0)) {
  VAR_20 = FUNC_19(VAR_6, VAR_2);
  if (VAR_20 == ((void*)0)) {
   FUNC_15();
   VAR_20 = FUNC_19(VAR_6, VAR_2);
   if (VAR_20 == ((void*)0)) {
    FUNC_4(VAR_16, VAR_4);
    goto drop_fragment;
   }
  }

  *(struct pf_fragment_cmp *)VAR_20 = *VAR_14;
  FUNC_13(VAR_20->fr_firstoff, 0, sizeof(VAR_20->fr_firstoff));
  FUNC_13(VAR_20->fr_entries, 0, sizeof(VAR_20->fr_entries));
  VAR_20->fr_timeout = VAR_13;
  VAR_20->fr_maxlen = VAR_15->fe_len;
  VAR_20->fr_holes = 1;
  FUNC_7(&VAR_20->fr_queue);

  FUNC_3(VAR_11, &VAR_5, VAR_20);
  FUNC_8(&VAR_7, VAR_20, VAR_10);


  FUNC_16(VAR_20, VAR_15, ((void*)0));

  return (VAR_20);
 }

 FUNC_1(!FUNC_5(&VAR_20->fr_queue), ("!TAILQ_EMPTY()->fr_queue"));


 if (VAR_15->fe_len > VAR_20->fr_maxlen)
  VAR_20->fr_maxlen = VAR_15->fe_len;


 VAR_21 = FUNC_9(&VAR_20->fr_queue, VAR_12)->fe_off +
  FUNC_9(&VAR_20->fr_queue, VAR_12)->fe_len;


 if (VAR_15->fe_off + VAR_15->fe_len < VAR_21 && !VAR_15->fe_mff)
  goto bad_fragment;


 if (!FUNC_9(&VAR_20->fr_queue, VAR_12)->fe_mff) {
  if (VAR_15->fe_off + VAR_15->fe_len > VAR_21 ||
      (VAR_15->fe_off + VAR_15->fe_len == VAR_21 && VAR_15->fe_mff))
   goto bad_fragment;
 } else {
  if (VAR_15->fe_off + VAR_15->fe_len == VAR_21 && !VAR_15->fe_mff)
   goto bad_fragment;
 }


 VAR_19 = FUNC_17(VAR_20, VAR_15);
 if (VAR_19 == ((void*)0)) {
  VAR_17 = FUNC_6(&VAR_20->fr_queue);
  FUNC_1(VAR_17 != ((void*)0), ("after != NULL"));
 } else {
  VAR_17 = FUNC_10(VAR_19, VAR_9);
 }

 if (VAR_19 != ((void*)0) && VAR_19->fe_off + VAR_19->fe_len > VAR_15->fe_off) {
  uint16_t VAR_22;

  VAR_22 = VAR_19->fe_off + VAR_19->fe_len - VAR_15->fe_off;
  if (VAR_22 >= VAR_15->fe_len)
   goto bad_fragment;
  FUNC_0(("overlap -%d", VAR_22));
  FUNC_11(VAR_15->fe_m, VAR_22);
  VAR_15->fe_off += VAR_22;
  VAR_15->fe_len -= VAR_22;
 }

 for (; VAR_17 != ((void*)0) && VAR_15->fe_off + VAR_15->fe_len > VAR_17->fe_off;
     VAR_17 = VAR_18) {
  uint16_t VAR_23;

  VAR_23 = VAR_15->fe_off + VAR_15->fe_len - VAR_17->fe_off;
  FUNC_0(("adjust overlap %d", VAR_23));
  if (VAR_23 < VAR_17->fe_len) {
   FUNC_11(VAR_17->fe_m, VAR_23);
   VAR_17->fe_off += VAR_23;
   VAR_17->fe_len -= VAR_23;
   break;
  }


  VAR_18 = FUNC_10(VAR_17, VAR_9);
  FUNC_18(VAR_20, VAR_17);
  FUNC_12(VAR_17->fe_m);
  FUNC_20(VAR_8, VAR_17);
 }


 if (FUNC_16(VAR_20, VAR_15, VAR_19)) {
  FUNC_0(("fragment queue limit exceeded"));
  goto bad_fragment;
 }

 return (VAR_20);

bad_fragment:
 FUNC_4(VAR_16, VAR_3);
drop_fragment:
 FUNC_20(VAR_8, VAR_15);
 return (((void*)0));
}
