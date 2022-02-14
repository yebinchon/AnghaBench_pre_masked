
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uInt ;
struct TYPE_8__ {int bits; int* lsu; int exponent; int digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_9__ {int emax; int digits; scalar_t__ clamp; } ;
typedef TYPE_2__ decContext ;
typedef size_t Unit ;
typedef int Int ;
typedef int Flag ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (size_t*,int ,int) ;
 size_t* VAR_4 ;

__attribute__((used)) static decNumber * FUNC_5(decNumber *VAR_5, decContext *VAR_6, Flag VAR_7,
                           Flag VAR_8, Int *VAR_9) {
  Int VAR_10, VAR_11;
  uInt VAR_12;
  Unit *VAR_13;





  *VAR_9=0;
  if ((VAR_5->bits & VAR_1)
    || (*VAR_5->lsu & 0x01)) return VAR_5;
  if (FUNC_1(VAR_5)) {
    VAR_5->exponent=0;
    return VAR_5;
    }


  VAR_11=VAR_5->exponent;
  VAR_12=1;
  VAR_13=VAR_5->lsu;
  for (VAR_10=0; VAR_10<VAR_5->digits-1; VAR_10++) {


      uInt VAR_14=FUNC_2(*VAR_13, VAR_12);
      if ((*VAR_13-VAR_14*VAR_4[VAR_12])!=0) break;




    if (!VAR_7) {

      if (VAR_11<=0) {
        if (VAR_11==0) break;
        VAR_11++;
        }
      }
    VAR_12++;
    if (VAR_12>VAR_0) {
      VAR_13++;
      VAR_12=1;
      }
    }
  if (VAR_10==0) return VAR_5;


  if (VAR_6->clamp && !VAR_8) {
    Int VAR_15=VAR_6->emax-VAR_6->digits+1-VAR_5->exponent;
    if (VAR_15<=0) return VAR_5;
    if (VAR_10>VAR_15) VAR_10=VAR_15;
    }


  FUNC_4(VAR_5->lsu, FUNC_0(VAR_5->digits), VAR_10);
  VAR_5->exponent+=VAR_10;
  VAR_5->digits-=VAR_10;
  *VAR_9=VAR_10;
  return VAR_5;
  }
