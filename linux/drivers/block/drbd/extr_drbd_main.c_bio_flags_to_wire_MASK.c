
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drbd_connection {int agreed_pro_version; int agreed_features; } ;
struct bio {int bi_opf; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct bio*) ;

__attribute__((used)) static u32 FUNC_1(struct drbd_connection *VAR_14,
        struct bio *VAR_15)
{
 if (VAR_14->agreed_pro_version >= 95)
  return (VAR_15->bi_opf & VAR_13 ? VAR_3 : 0) |
   (VAR_15->bi_opf & VAR_7 ? VAR_2 : 0) |
   (VAR_15->bi_opf & VAR_12 ? VAR_1 : 0) |
   (FUNC_0(VAR_15) == VAR_10 ? VAR_4 : 0) |
   (FUNC_0(VAR_15) == VAR_9 ? VAR_0 : 0) |
   (FUNC_0(VAR_15) == VAR_11 ?
     ((VAR_14->agreed_features & VAR_6) ?
      (VAR_5 |(!(VAR_15->bi_opf & VAR_8) ? VAR_0 : 0))
      : VAR_0)
   : 0);
 else
  return VAR_15->bi_opf & VAR_13 ? VAR_3 : 0;
}
