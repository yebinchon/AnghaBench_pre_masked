
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adv748x_state {scalar_t__* endpoints; } ;
struct TYPE_4__ {int entity; } ;
struct adv748x_afe {unsigned int input; int streaming; TYPE_2__ sd; TYPE_1__* pads; int curr_norm; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct adv748x_afe*) ;
 int VAR_10 ;
 int FUNC_1 (struct adv748x_afe*,unsigned int) ;
 struct adv748x_state* FUNC_2 (struct adv748x_afe*) ;
 int FUNC_3 (TYPE_2__*,struct adv748x_state*,int *,int ,char*) ;
 int FUNC_4 (struct adv748x_state*,char*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;

int FUNC_7(struct adv748x_afe *VAR_11)
{
 struct adv748x_state *VAR_12 = FUNC_2(VAR_11);
 int VAR_13;
 unsigned int VAR_14;

 VAR_11->input = 0;
 VAR_11->streaming = 0;
 VAR_11->curr_norm = VAR_9;

 FUNC_3(&VAR_11->sd, VAR_12, &VAR_10,
       VAR_6, "afe");


 for (VAR_14 = VAR_4; VAR_14 <= VAR_5; VAR_14++) {

  if (VAR_12->endpoints[VAR_14]) {
   VAR_11->input = VAR_14;
   break;
  }
 }

 FUNC_1(VAR_11, VAR_11->input);

 FUNC_4(VAR_12, "AFE Default input set to %d\n", VAR_11->input);


 for (VAR_14 = VAR_1; VAR_14 <= VAR_2; VAR_14++)
  VAR_11->pads[VAR_14].flags = VAR_7;

 VAR_11->pads[VAR_3].flags = VAR_8;

 VAR_13 = FUNC_6(&VAR_11->sd.entity, VAR_0,
   VAR_11->pads);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11);
 if (VAR_13)
  goto error;

 return 0;

error:
 FUNC_5(&VAR_11->sd.entity);

 return VAR_13;
}
