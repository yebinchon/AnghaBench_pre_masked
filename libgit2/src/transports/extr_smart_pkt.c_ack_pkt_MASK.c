
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int oid; int type; } ;
typedef TYPE_1__ git_pkt_ack ;
typedef int git_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,size_t,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *,char const*) ;

__attribute__((used)) static int FUNC_6(git_pkt **VAR_6, const char *VAR_7, size_t VAR_8)
{
 git_pkt_ack *VAR_9;

 VAR_9 = FUNC_1(1, sizeof(git_pkt_ack));
 FUNC_0(VAR_9);
 VAR_9->type = VAR_5;

 if (FUNC_3(VAR_7, VAR_8, "ACK "))
  goto out_err;
 VAR_7 += 4;
 VAR_8 -= 4;

 if (VAR_8 < VAR_4 || FUNC_5(&VAR_9->oid, VAR_7) < 0)
  goto out_err;
 VAR_7 += VAR_4;
 VAR_8 -= VAR_4;

 if (VAR_8 && VAR_7[0] == ' ') {
  VAR_7++;
  VAR_8--;

  if (!FUNC_3(VAR_7, VAR_8, "continue"))
   VAR_9->status = VAR_1;
  else if (!FUNC_3(VAR_7, VAR_8, "common"))
   VAR_9->status = VAR_0;
  else if (!FUNC_3(VAR_7, VAR_8, "ready"))
   VAR_9->status = VAR_2;
  else
   goto out_err;
 }

 *VAR_6 = (git_pkt *) VAR_9;

 return 0;

out_err:
 FUNC_4(VAR_3, "error parsing ACK pkt-line");
 FUNC_2(VAR_9);
 return -1;
}
