
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ append_protocol; scalar_t__ append_method; scalar_t__ serve_usecs; scalar_t__ bandwidth; } ;
struct TYPE_11__ {scalar_t__ nts; } ;
struct TYPE_10__ {scalar_t__ nts; } ;
struct TYPE_9__ {scalar_t__ nts; } ;
struct TYPE_8__ {scalar_t__ nbw; } ;
struct TYPE_12__ {int hits; double hits_perc; int visitors; double visitors_perc; double bw_perc; char* method; char* protocol; int data; TYPE_4__ maxts; TYPE_3__ cumts; TYPE_2__ avgts; TYPE_1__ bw; } ;
typedef TYPE_5__ GMetrics ;
typedef int FILE ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2 (FILE * VAR_1, GMetrics * VAR_2)
{

  FUNC_1 (VAR_1, "\"%d\",", VAR_2->hits);
  FUNC_1 (VAR_1, "\"%4.2f%%\",", VAR_2->hits_perc);
  FUNC_1 (VAR_1, "\"%d\",", VAR_2->visitors);
  FUNC_1 (VAR_1, "\"%4.2f%%\",", VAR_2->visitors_perc);


  if (VAR_0.bandwidth) {
    FUNC_1 (VAR_1, "\"%lld\",", (long long) VAR_2->bw.nbw);
    FUNC_1 (VAR_1, "\"%4.2f%%\",", VAR_2->bw_perc);
  }


  if (VAR_0.serve_usecs) {
    FUNC_1 (VAR_1, "\"%lld\",", (long long) VAR_2->avgts.nts);
    FUNC_1 (VAR_1, "\"%lld\",", (long long) VAR_2->cumts.nts);
    FUNC_1 (VAR_1, "\"%lld\",", (long long) VAR_2->maxts.nts);
  }


  if (VAR_0.append_method && VAR_2->method)
    FUNC_1 (VAR_1, "\"%s\"", VAR_2->method);
  FUNC_1 (VAR_1, ",");


  if (VAR_0.append_protocol && VAR_2->protocol)
    FUNC_1 (VAR_1, "\"%s\"", VAR_2->protocol);
  FUNC_1 (VAR_1, ",");


  FUNC_1 (VAR_1, "\"");
  FUNC_0 (VAR_1, VAR_2->data);
  FUNC_1 (VAR_1, "\"\r\n");
}
