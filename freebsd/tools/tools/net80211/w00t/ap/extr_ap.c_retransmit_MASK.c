
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int packet_try; int plast; int packet_len; int packet; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct params*,int ,int ) ;

int FUNC_4(struct params *VAR_0)
{




 FUNC_3(VAR_0, VAR_0->packet, VAR_0->packet_len);
 VAR_0->packet_try++;

 if (VAR_0->packet_try > 3)
  VAR_0->packet_try = 0;
 else {
  if (FUNC_1(&VAR_0->plast, ((void*)0)) == -1)
   FUNC_0(1, "gettimeofday()");
 }

 return VAR_0->packet_try;
}
