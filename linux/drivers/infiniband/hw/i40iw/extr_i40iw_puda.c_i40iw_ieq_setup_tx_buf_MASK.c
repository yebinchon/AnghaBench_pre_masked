
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_puda_buf {int hdrlen; int ipv4; int tcphlen; int maclen; } ;


 int FUNC_0 (struct i40iw_puda_buf*,struct i40iw_puda_buf*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct i40iw_puda_buf *VAR_0,
       struct i40iw_puda_buf *VAR_1)
{
 VAR_1->maclen = VAR_0->maclen;
 VAR_1->tcphlen = VAR_0->tcphlen;
 VAR_1->ipv4 = VAR_0->ipv4;
 VAR_1->hdrlen = VAR_0->hdrlen;
 FUNC_0(VAR_0, VAR_1, 0, 0, VAR_0->hdrlen);
}
