
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int stats_count; char* stats_data; int stats_queue; int lock; } ;
struct sms_stats {int is_rf_locked; int is_demod_locked; int is_external_lna_on; int SNR; int ber; int FIB_CRC; int ts_per; int MFER; int RSSI; int in_band_pwr; int carrier_offset; int modem_state; int frequency; int bandwidth; int transmission_mode; int guard_interval; int code_rate; int lp_code_rate; int hierarchy; int constellation; int burst_size; int burst_duration; int burst_cycle_time; int calc_burst_cycle_time; int num_of_rows; int num_of_padd_cols; int num_of_punct_cols; int error_ts_packets; int total_ts_packets; int num_of_valid_mpe_tlbs; int num_of_invalid_mpe_tlbs; int num_of_corrected_mpe_tlbs; int ber_error_count; int ber_bit_count; int sms_to_host_tx_errors; int pre_ber; int cell_id; int dvbh_srv_ind_hp; int dvbh_srv_ind_lp; int num_mpe_received; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct smsdvb_debugfs *VAR_1,
       struct sms_stats *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4;

 FUNC_1(&VAR_1->lock);
 if (VAR_1->stats_count) {
  FUNC_2(&VAR_1->lock);
  return;
 }

 VAR_4 = VAR_1->stats_data;

 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "is_rf_locked = %d\n", VAR_2->is_rf_locked);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "is_demod_locked = %d\n", VAR_2->is_demod_locked);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "is_external_lna_on = %d\n", VAR_2->is_external_lna_on);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "SNR = %d\n", VAR_2->SNR);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "ber = %d\n", VAR_2->ber);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "FIB_CRC = %d\n", VAR_2->FIB_CRC);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "ts_per = %d\n", VAR_2->ts_per);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "MFER = %d\n", VAR_2->MFER);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "RSSI = %d\n", VAR_2->RSSI);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "in_band_pwr = %d\n", VAR_2->in_band_pwr);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "carrier_offset = %d\n", VAR_2->carrier_offset);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "modem_state = %d\n", VAR_2->modem_state);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "frequency = %d\n", VAR_2->frequency);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "bandwidth = %d\n", VAR_2->bandwidth);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "transmission_mode = %d\n", VAR_2->transmission_mode);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "modem_state = %d\n", VAR_2->modem_state);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "guard_interval = %d\n", VAR_2->guard_interval);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "code_rate = %d\n", VAR_2->code_rate);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "lp_code_rate = %d\n", VAR_2->lp_code_rate);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "hierarchy = %d\n", VAR_2->hierarchy);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "constellation = %d\n", VAR_2->constellation);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "burst_size = %d\n", VAR_2->burst_size);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "burst_duration = %d\n", VAR_2->burst_duration);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "burst_cycle_time = %d\n", VAR_2->burst_cycle_time);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "calc_burst_cycle_time = %d\n",
        VAR_2->calc_burst_cycle_time);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_rows = %d\n", VAR_2->num_of_rows);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_padd_cols = %d\n", VAR_2->num_of_padd_cols);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_punct_cols = %d\n", VAR_2->num_of_punct_cols);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "error_ts_packets = %d\n", VAR_2->error_ts_packets);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "total_ts_packets = %d\n", VAR_2->total_ts_packets);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_valid_mpe_tlbs = %d\n", VAR_2->num_of_valid_mpe_tlbs);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_invalid_mpe_tlbs = %d\n", VAR_2->num_of_invalid_mpe_tlbs);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_of_corrected_mpe_tlbs = %d\n", VAR_2->num_of_corrected_mpe_tlbs);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "ber_error_count = %d\n", VAR_2->ber_error_count);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "ber_bit_count = %d\n", VAR_2->ber_bit_count);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "sms_to_host_tx_errors = %d\n", VAR_2->sms_to_host_tx_errors);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "pre_ber = %d\n", VAR_2->pre_ber);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "cell_id = %d\n", VAR_2->cell_id);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "dvbh_srv_ind_hp = %d\n", VAR_2->dvbh_srv_ind_hp);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "dvbh_srv_ind_lp = %d\n", VAR_2->dvbh_srv_ind_lp);
 VAR_3 += FUNC_0(&VAR_4[VAR_3], VAR_0 - VAR_3,
        "num_mpe_received = %d\n", VAR_2->num_mpe_received);

 VAR_1->stats_count = VAR_3;
 FUNC_2(&VAR_1->lock);
 FUNC_3(&VAR_1->stats_queue);
}
