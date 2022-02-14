
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {unsigned int length; scalar_t__ value; } ;
struct nx_of {int flags; TYPE_1__*** ap; } ;
struct msc_triplet {size_t sglen; scalar_t__ databytelen; int keybitlen; } ;
struct max_sync_cop {unsigned int triplets; scalar_t__ fc; scalar_t__ mode; struct msc_triplet* trip; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ databytelen; size_t sglen; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,char*,size_t,...) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_7,
        struct property *VAR_8,
        struct nx_of *VAR_9)
{
 struct msc_triplet *VAR_10;
 struct max_sync_cop *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 VAR_11 = (struct max_sync_cop *)VAR_8->value;
 VAR_14 = VAR_8->length;





 VAR_12 = 0;

 while ((VAR_12 + sizeof(struct max_sync_cop)) <= VAR_14) {
  VAR_12 += sizeof(struct max_sync_cop);

  VAR_10 = VAR_11->trip;

  for (VAR_13 = 0;
       ((VAR_12 + sizeof(struct msc_triplet)) <= VAR_14) &&
       VAR_13 < VAR_11->triplets;
       VAR_13++) {
   if (VAR_11->fc >= VAR_3 || VAR_11->mode >= VAR_4) {
    FUNC_0(VAR_7, "unknown function code/mode "
     "combo: %d/%d (ignored)\n", VAR_11->fc,
     VAR_11->mode);
    goto next_loop;
   }

   if (!VAR_10->sglen || VAR_10->databytelen < VAR_6) {
    FUNC_1(VAR_7, "bogus sglen/databytelen: "
      "%u/%u (ignored)\n", VAR_10->sglen,
      VAR_10->databytelen);
    goto next_loop;
   }

   switch (VAR_10->keybitlen) {
   case 128:
   case 160:
    VAR_9->ap[VAR_11->fc][VAR_11->mode][0].databytelen =
     VAR_10->databytelen;
    VAR_9->ap[VAR_11->fc][VAR_11->mode][0].sglen =
     VAR_10->sglen;
    break;
   case 192:
    VAR_9->ap[VAR_11->fc][VAR_11->mode][1].databytelen =
     VAR_10->databytelen;
    VAR_9->ap[VAR_11->fc][VAR_11->mode][1].sglen =
     VAR_10->sglen;
    break;
   case 256:
    if (VAR_11->fc == VAR_0) {
     VAR_9->ap[VAR_11->fc][VAR_11->mode][2].
      databytelen = VAR_10->databytelen;
     VAR_9->ap[VAR_11->fc][VAR_11->mode][2].sglen =
      VAR_10->sglen;
    } else if (VAR_11->fc == VAR_1 ||
        VAR_11->fc == VAR_2) {
     VAR_9->ap[VAR_11->fc][VAR_11->mode][1].
      databytelen = VAR_10->databytelen;
     VAR_9->ap[VAR_11->fc][VAR_11->mode][1].sglen =
      VAR_10->sglen;
    } else {
     FUNC_1(VAR_7, "unknown function "
      "code/key bit len combo"
      ": (%u/256)\n", VAR_11->fc);
    }
    break;
   case 512:
    VAR_9->ap[VAR_11->fc][VAR_11->mode][2].databytelen =
     VAR_10->databytelen;
    VAR_9->ap[VAR_11->fc][VAR_11->mode][2].sglen =
     VAR_10->sglen;
    break;
   default:
    FUNC_1(VAR_7, "unknown function code/key bit "
      "len combo: (%u/%u)\n", VAR_11->fc,
      VAR_10->keybitlen);
    break;
   }
next_loop:
   VAR_12 += sizeof(struct msc_triplet);
   VAR_10++;
  }

  VAR_11 = (struct max_sync_cop *)VAR_10;
 }

 VAR_9->flags |= VAR_5;
}
