
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tcp_seq ;
struct tcpcb {scalar_t__ snd_numholes; } ;
struct sackhole {void* rxmit; void* end; void* start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static struct sackhole *
FUNC_3(struct tcpcb *VAR_6, tcp_seq VAR_7, tcp_seq VAR_8)
{
 struct sackhole *VAR_9;

 if (VAR_6->snd_numholes >= VAR_4 ||
     VAR_2 >= VAR_3) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_9 = (struct sackhole *)FUNC_2(VAR_1, VAR_0);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 VAR_9->start = VAR_7;
 VAR_9->end = VAR_8;
 VAR_9->rxmit = VAR_7;

 VAR_6->snd_numholes++;
 FUNC_1(&VAR_2, 1);

 return VAR_9;
}
