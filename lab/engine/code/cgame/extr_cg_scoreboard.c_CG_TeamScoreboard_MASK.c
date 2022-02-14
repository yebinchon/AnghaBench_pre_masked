
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ team_t ;
struct TYPE_6__ {size_t client; } ;
typedef TYPE_1__ score_t ;
struct TYPE_7__ {scalar_t__ team; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_9__ {int numScores; TYPE_1__* scores; } ;
struct TYPE_8__ {TYPE_2__* clientinfo; } ;


 int FUNC_0 (int,TYPE_1__*,float*,float,int) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_1( int VAR_3, team_t VAR_4, float VAR_5, int VAR_6, int VAR_7 ) {
 int VAR_8;
 score_t *VAR_9;
 float VAR_10[4];
 int VAR_11;
 clientInfo_t *VAR_12;

 VAR_10[0] = VAR_10[1] = VAR_10[2] = 1.0;
 VAR_10[3] = VAR_5;

 VAR_11 = 0;
 for ( VAR_8 = 0 ; VAR_8 < VAR_1.numScores && VAR_11 < VAR_6 ; VAR_8++ ) {
  VAR_9 = &VAR_1.scores[VAR_8];
  VAR_12 = &VAR_2.clientinfo[ VAR_9->client ];

  if ( VAR_4 != VAR_12->team ) {
   continue;
  }

  FUNC_0( VAR_3 + VAR_7 * VAR_11, VAR_9, VAR_10, VAR_5, VAR_7 == VAR_0 );

  VAR_11++;
 }

 return VAR_11;
}
