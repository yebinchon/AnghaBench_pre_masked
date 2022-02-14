
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_chan_info {int * chan; } ;
struct idr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct idr*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct scmi_chan_info *VAR_3 = VAR_1;
 struct idr *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_3->chan)) {
  FUNC_2(VAR_3->chan);
  VAR_3->chan = ((void*)0);
 }

 FUNC_1(VAR_4, VAR_0);

 return 0;
}
