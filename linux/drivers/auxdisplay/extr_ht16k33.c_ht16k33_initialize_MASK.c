
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ht16k33_priv {TYPE_1__* client; } ;
typedef int data ;
struct TYPE_3__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int,int*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ht16k33_priv *VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;
 uint8_t VAR_9[VAR_0 * 2];


 FUNC_2(VAR_9, 0, sizeof(VAR_9));
 VAR_8 = FUNC_0(VAR_6->client, 0, sizeof(VAR_9), VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_7 = VAR_5 | VAR_4;
 VAR_8 = FUNC_1(VAR_6->client, VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_7 = VAR_1 | VAR_2;
 if (VAR_6->client->irq > 0)
  VAR_7 |= VAR_3;
 return FUNC_1(VAR_6->client, VAR_7);
}
