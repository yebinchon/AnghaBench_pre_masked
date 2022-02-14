
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int deci; int csel; int rsel; int master_clk; } ;



__attribute__((used)) static void FUNC_0(struct mb86a16_state *VAR_0, int VAR_1)
{
 if (VAR_1 >= 37501) {
  VAR_0->deci = 0; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 30001) {
  VAR_0->deci = 0; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 26251) {
  VAR_0->deci = 0; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else if (VAR_1 >= 22501) {
  VAR_0->deci = 0; VAR_0->csel = 1; VAR_0->rsel = 1;
 } else if (VAR_1 >= 18751) {
  VAR_0->deci = 1; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 15001) {
  VAR_0->deci = 1; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 13126) {
  VAR_0->deci = 1; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else if (VAR_1 >= 11251) {
  VAR_0->deci = 1; VAR_0->csel = 1; VAR_0->rsel = 1;
 } else if (VAR_1 >= 9376) {
  VAR_0->deci = 2; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 7501) {
  VAR_0->deci = 2; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 6563) {
  VAR_0->deci = 2; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else if (VAR_1 >= 5626) {
  VAR_0->deci = 2; VAR_0->csel = 1; VAR_0->rsel = 1;
 } else if (VAR_1 >= 4688) {
  VAR_0->deci = 3; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 3751) {
  VAR_0->deci = 3; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 3282) {
  VAR_0->deci = 3; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else if (VAR_1 >= 2814) {
  VAR_0->deci = 3; VAR_0->csel = 1; VAR_0->rsel = 1;
 } else if (VAR_1 >= 2344) {
  VAR_0->deci = 4; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 1876) {
  VAR_0->deci = 4; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 1641) {
  VAR_0->deci = 4; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else if (VAR_1 >= 1407) {
  VAR_0->deci = 4; VAR_0->csel = 1; VAR_0->rsel = 1;
 } else if (VAR_1 >= 1172) {
  VAR_0->deci = 5; VAR_0->csel = 0; VAR_0->rsel = 0;
 } else if (VAR_1 >= 939) {
  VAR_0->deci = 5; VAR_0->csel = 0; VAR_0->rsel = 1;
 } else if (VAR_1 >= 821) {
  VAR_0->deci = 5; VAR_0->csel = 1; VAR_0->rsel = 0;
 } else {
  VAR_0->deci = 5; VAR_0->csel = 1; VAR_0->rsel = 1;
 }

 if (VAR_0->csel == 0)
  VAR_0->master_clk = 92000;
 else
  VAR_0->master_clk = 61333;

}
