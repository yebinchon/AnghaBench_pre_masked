
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uma_zone_domain {int dummy; } ;
struct uma_zone {int dummy; } ;
struct uma_keg {int dummy; } ;
struct uma_domain {int dummy; } ;
struct uma_cache {int dummy; } ;
struct slabhead {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;

int
FUNC_3(int VAR_11)
{
 int VAR_12, VAR_13;

 VAR_7 = sizeof(struct uma_keg) +
     (sizeof(struct uma_domain) * VAR_9);
 VAR_10 = sizeof(struct uma_zone) +
     (sizeof(struct uma_cache) * (VAR_8 + 1)) +
     (sizeof(struct uma_zone_domain) * VAR_9);





 VAR_13 = FUNC_0(FUNC_1(VAR_10, VAR_0) * 2 +
     FUNC_1(VAR_7, VAR_0), VAR_1);




 VAR_12 = VAR_4 + VAR_11;
 VAR_11 = 0;



 if (VAR_10 > VAR_6) {

  u_int VAR_14;

  VAR_14 = FUNC_0(FUNC_2(VAR_10, VAR_3), VAR_1);
  if (VAR_1 * VAR_14 - FUNC_2(VAR_10, VAR_3) <
      VAR_2)
   VAR_14++;
  VAR_13 += (VAR_12 + VAR_11) * VAR_14;
 } else if (FUNC_2(VAR_10, VAR_3) > VAR_6)

  VAR_13 += VAR_12;
 else
  VAR_13 += FUNC_0(VAR_12,
      VAR_6 / FUNC_2(VAR_10, VAR_3));


 VAR_13 += FUNC_0(VAR_12 + 1,
     VAR_6 / FUNC_2(VAR_7, VAR_3));
 VAR_13 += FUNC_0(VAR_12, VAR_6 /
     (sizeof(struct slabhead *) * VAR_5));

 return (VAR_13);
}
