
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_13__ {int score; int qe; int te; int tb; int qb; } ;
typedef TYPE_1__ kswr_t ;
struct TYPE_14__ {int size; } ;
typedef TYPE_2__ kswq_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ FUNC_1 (TYPE_2__*,int,int const*,int,int,int) ;
 TYPE_2__* FUNC_2 (int,int,int const*,int,int const*) ;
 TYPE_1__ FUNC_3 (TYPE_2__*,int,int const*,int,int,int) ;
 int FUNC_4 (int,int const*) ;

kswr_t FUNC_5(int VAR_4, uint8_t *VAR_5, int VAR_6, uint8_t *VAR_7, int VAR_8, const int8_t *VAR_9, int VAR_10, int VAR_11, int VAR_12, kswq_t **VAR_13)
{
 int VAR_14;
 kswq_t *VAR_15;
 kswr_t VAR_16, VAR_17;
 kswr_t (*VAR_18)(kswq_t*, int, const uint8_t*, int, int, int);

 VAR_15 = (VAR_13 && *VAR_13)? *VAR_13 : FUNC_2((VAR_12&VAR_0)? 1 : 2, VAR_4, VAR_5, VAR_8, VAR_9);
 if (VAR_13 && *VAR_13 == 0) *VAR_13 = VAR_15;
 VAR_18 = VAR_15->size == 2? FUNC_1 : FUNC_3;
 VAR_14 = VAR_15->size;
 VAR_16 = VAR_18(VAR_15, VAR_6, VAR_7, VAR_10, VAR_11, VAR_12);
 if (VAR_13 == 0) FUNC_0(VAR_15);
 if ((VAR_12&VAR_1) == 0 || ((VAR_12&VAR_3) && VAR_16.score < (VAR_12&0xffff))) return VAR_16;
 FUNC_4(VAR_16.qe + 1, VAR_5); FUNC_4(VAR_16.te + 1, VAR_7);
 VAR_15 = FUNC_2(VAR_14, VAR_16.qe + 1, VAR_5, VAR_8, VAR_9);
 VAR_17 = VAR_18(VAR_15, VAR_6, VAR_7, VAR_10, VAR_11, VAR_2 | VAR_16.score);
 FUNC_4(VAR_16.qe + 1, VAR_5); FUNC_4(VAR_16.te + 1, VAR_7);
 FUNC_0(VAR_15);
 if (VAR_16.score == VAR_17.score)
  VAR_16.tb = VAR_16.te - VAR_17.te, VAR_16.qb = VAR_16.qe - VAR_17.qe;
 return VAR_16;
}
