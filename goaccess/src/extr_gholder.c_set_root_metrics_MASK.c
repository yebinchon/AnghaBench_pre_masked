
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {int nbw; } ;
struct TYPE_13__ {int nts; } ;
struct TYPE_12__ {int nts; } ;
struct TYPE_11__ {int nts; } ;
struct TYPE_16__ {char* data; int hits; int visitors; TYPE_4__ bw; TYPE_3__ maxts; TYPE_2__ cumts; TYPE_1__ avgts; } ;
struct TYPE_15__ {int key; } ;
typedef int GRawDataType ;
typedef TYPE_5__ GRawDataItem ;
typedef int GModule ;
typedef TYPE_6__ GMetrics ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_6__* FUNC_4 () ;
 int FUNC_5 (int ,TYPE_5__,int ,char**,int*) ;

__attribute__((used)) static int
FUNC_6 (GRawDataItem VAR_0, GRawDataType VAR_1, GModule VAR_2,
                  GMetrics ** VAR_3)
{
  GMetrics *VAR_4;
  char *VAR_5 = ((void*)0);
  uint64_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
  int VAR_9 = 0, VAR_10 = 0;

  if (FUNC_5 (VAR_2, VAR_0, VAR_1, &VAR_5, &VAR_9) == 1)
    return 1;

  VAR_6 = FUNC_0 (VAR_2, VAR_0.key);
  VAR_7 = FUNC_1 (VAR_2, VAR_0.key);
  VAR_8 = FUNC_2 (VAR_2, VAR_0.key);
  VAR_10 = FUNC_3 (VAR_2, VAR_0.key);

  VAR_4 = FUNC_4 ();
  VAR_4->avgts.nts = VAR_7 / VAR_9;
  VAR_4->cumts.nts = VAR_7;
  VAR_4->maxts.nts = VAR_8;
  VAR_4->bw.nbw = VAR_6;
  VAR_4->data = VAR_5;
  VAR_4->hits = VAR_9;
  VAR_4->visitors = VAR_10;
  *VAR_3 = VAR_4;

  return 0;
}
